/*
 * XREFs of sub_1400529A4 @ 0x1400529A4
 * Callers:
 *     sub_140052B68 @ 0x140052B68 (sub_140052B68.c)
 *     sub_140052C18 @ 0x140052C18 (sub_140052C18.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140052114 @ 0x140052114 (sub_140052114.c)
 */

__int64 __fastcall sub_1400529A4(__int64 *a1)
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
  sub_140052114(v2, a1[1]);
  return sub_1400453E4(a1[1], 0x20uLL);
}
