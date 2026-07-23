/*
 * XREFs of HvpGetCellMap @ 0x140C5E690
 * Callers:
 *     HvpShrinkMap @ 0x140866938 (HvpShrinkMap.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     HvpTruncateBins @ 0x1408BEFE0 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408E1C90 (HvMarkCellDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x1408E2D90 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpCopyModifiedData @ 0x140B10848 (HvpCopyModifiedData.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B878DC (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5E46C (HvSnapshotHiveToOffsetArray.c)
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
