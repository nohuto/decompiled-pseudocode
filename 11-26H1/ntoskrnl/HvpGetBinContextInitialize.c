/*
 * XREFs of HvpGetBinContextInitialize @ 0x140C58AA0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpFindFreeCell @ 0x1408DB370 (HvpFindFreeCell.c)
 *     HvpGetBinContextMove @ 0x1408DBB10 (HvpGetBinContextMove.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x1408DC7D0 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A543C0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEB73C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpCopyModifiedData @ 0x140B0F018 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
