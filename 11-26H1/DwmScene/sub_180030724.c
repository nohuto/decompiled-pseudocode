/*
 * XREFs of sub_180030724 @ 0x180030724
 * Callers:
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030724(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0x48uLL);
  return a1;
}
