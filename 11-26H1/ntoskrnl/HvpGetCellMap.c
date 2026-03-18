/*
 * XREFs of HvpGetCellMap @ 0x140C58690
 * Callers:
 *     HvpShrinkMap @ 0x140860648 (HvpShrinkMap.c)
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     HvpTruncateBins @ 0x1408B8A10 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408D171C (CmpAddToLeaf.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpFindFreeCell @ 0x1408DB370 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408DB6D0 (HvMarkCellDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x1408DC7D0 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408DD510 (HvpPointMapEntriesToBuffer.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A543C0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEB73C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpCopyModifiedData @ 0x140B0F018 (HvpCopyModifiedData.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B7E9FC (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5846C (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = a2 >> 31;
  v3 = a1 + 632 * v2;
  if ( a2 + ((_DWORD)v2 << 31) >= *(_DWORD *)(v3 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v3 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
