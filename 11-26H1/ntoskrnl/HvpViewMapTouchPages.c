/*
 * XREFs of HvpViewMapTouchPages @ 0x1408B98D0
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140AD65B8 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x14085C984 (HvpInpageErrorFilter.c)
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
