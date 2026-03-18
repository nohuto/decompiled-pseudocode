/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140C586F0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvpMapEntryGetBlockAddress @ 0x1408B9270 (HvpMapEntryGetBlockAddress.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpFindFreeCell @ 0x1408DB370 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x1408DC7D0 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A543C0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEB73C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5846C (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a3 |= 1u;
  return v3 & 0xFFFFFFFFFFFFFFF0uLL;
}
