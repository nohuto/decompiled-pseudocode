/*
 * XREFs of sub_140052A00 @ 0x140052A00
 * Callers:
 *     sub_140052B74 @ 0x140052B74 (sub_140052B74.c)
 *     sub_140052C18 @ 0x140052C18 (sub_140052C18.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_1400520DC @ 0x1400520DC (sub_1400520DC.c)
 */

__int64 __fastcall sub_140052A00(__int64 *a1)
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
  sub_1400520DC(v2, a1[1]);
  return sub_1400453E4(a1[1], 0x38uLL);
}
