/*
 * XREFs of sub_1800BF76C @ 0x1800BF76C
 * Callers:
 *     sub_1800BF79C @ 0x1800BF79C (sub_1800BF79C.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 * Callees:
 *     sub_1800BEF34 @ 0x1800BEF34 (sub_1800BEF34.c)
 */

__int64 __fastcall sub_1800BF76C(void **a1)
{
  sub_1800BEF34((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x48uLL);
}
