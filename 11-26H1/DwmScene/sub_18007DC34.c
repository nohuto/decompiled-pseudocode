/*
 * XREFs of sub_18007DC34 @ 0x18007DC34
 * Callers:
 *     sub_18007D99C @ 0x18007D99C (sub_18007D99C.c)
 * Callees:
 *     sub_18007D524 @ 0x18007D524 (sub_18007D524.c)
 */

__int64 *__fastcall sub_18007DC34(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
    sub_18007D524(a1, *a2, 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 3));
  return a1;
}
