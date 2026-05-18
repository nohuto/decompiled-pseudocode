/*
 * XREFs of sub_1800253EC @ 0x1800253EC
 * Callers:
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_18004B768 @ 0x18004B768 (sub_18004B768.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800253EC(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0x40uLL);
  return a1;
}
