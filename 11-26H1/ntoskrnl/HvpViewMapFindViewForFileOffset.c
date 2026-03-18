/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x1408B94FC
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x14085CBD8 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapExtendStorage @ 0x1408B8788 (HvpViewMapExtendStorage.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1408B8844 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapSealRange @ 0x1408B9288 (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408B9378 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140AD64C4 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     HvpViewMapAdjustFlag @ 0x140B0A110 (HvpViewMapAdjustFlag.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B7E9FC (HvpMapHiveImageFromViewMap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapFindViewForFileOffset(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx

  v2 = a1 + 40;
  result = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
    result ^= v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  while ( result )
  {
    if ( a2 < *(_QWORD *)(result + 40) )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 < *(_QWORD *)(result + 48) )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( v5 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}
