/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140C5E710
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140B10908 (HvpMapEntryReleaseBlockAddress.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5E46C (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0;
  return result;
}
