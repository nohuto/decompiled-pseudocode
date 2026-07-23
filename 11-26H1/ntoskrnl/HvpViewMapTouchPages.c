/*
 * XREFs of HvpViewMapTouchPages @ 0x1408BFEA0
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1408B5B6C (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408BF9B8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408BFC18 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x140862C74 (HvpInpageErrorFilter.c)
 */

__int64 __fastcall HvpViewMapTouchPages(_BYTE *a1, __int64 a2, char a3)
{
  _BYTE *v3; // r9
  __int64 result; // rax

  v3 = &a1[a2];
  result = 0LL;
  while ( a1 < v3 )
  {
    if ( a3 )
      *a1 = *a1;
    a1 += 4096;
  }
  return result;
}
