/*
 * XREFs of sub_14009361C @ 0x14009361C
 * Callers:
 *     sub_1400B4910 @ 0x1400B4910 (sub_1400B4910.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400930FC @ 0x1400930FC (sub_1400930FC.c)
 */

__int64 __fastcall sub_14009361C(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    sub_1400453E4(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_1400930FC(v2, a1[1]);
  return sub_1400453E4(a1[1], 0x30uLL);
}
