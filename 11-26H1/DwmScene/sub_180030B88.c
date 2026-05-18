/*
 * XREFs of sub_180030B88 @ 0x180030B88
 * Callers:
 *     sub_180031168 @ 0x180031168 (sub_180031168.c)
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 *     sub_1800BF300 @ 0x1800BF300 (sub_1800BF300.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 */

__int64 *__fastcall sub_180030B88(__int64 *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18002ECC8(1uLL);
  v3 = sub_180011790(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
