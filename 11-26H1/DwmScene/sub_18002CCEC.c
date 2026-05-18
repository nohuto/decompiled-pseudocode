/*
 * XREFs of sub_18002CCEC @ 0x18002CCEC
 * Callers:
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18002CCEC(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1AF286BCA1AF286LL;
  v3 = (0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x1AF286BCA1AF286LL - v3 )
  {
    result = v3 - 0x79435E50D79435E5LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
