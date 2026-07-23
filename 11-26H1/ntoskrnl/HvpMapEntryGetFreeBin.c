/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1408BF5C0
 * Callers:
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x1408BEFE0 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 */

__int64 __fastcall HvpMapEntryGetFreeBin(__int64 a1)
{
  __int64 v1; // rcx

  if ( (unsigned __int8)HvpMapEntryIsDiscardable(a1) )
    return *(_QWORD *)v1;
  else
    return 0LL;
}
