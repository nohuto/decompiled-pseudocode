/*
 * XREFs of sub_18007D10C @ 0x18007D10C
 * Callers:
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 *     sub_18007F40C @ 0x18007F40C (sub_18007F40C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007D10C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x666666666666666LL;
  v3 = (0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x666666666666666LL - v3 )
  {
    result = v3 - 0x3333333333333333LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
