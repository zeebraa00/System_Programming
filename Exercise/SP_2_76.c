#include <stdio.h>

int func_A(int x) {
    return ((x<<2) + x);
}

int func_B(int x) {
    return ((x<<3) + x);
}

int func_C(int x) {
    return ((x<<5) - (x<<1));
}
                    
int func_D(int x) {
    return ((x<<3) - (x<<6));
}

int main() {
    int x;
    printf("input any integer : ");
    scanf("%d", &x);

    printf("x * 5 = %d\n", func_A(x));
    printf("x * 9 = %d\n", func_B(x));
    printf("x * 30 = %d\n", func_C(x));
    printf("x * (-56) = %d\n", func_D(x));

    return 0;
}