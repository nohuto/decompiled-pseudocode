/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1408B8FF0
 * Callers:
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x1408B8A10 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x1408D9350 (HvpMapEntryIsDiscardable.c)
 */

__int64 __fastcall HvpMapEntryGetFreeBin(__int64 a1)
{
  __int64 v1; // rcx

  if ( (unsigned __int8)HvpMapEntryIsDiscardable(a1) )
    return *(_QWORD *)v1;
  else
    return 0LL;
}
