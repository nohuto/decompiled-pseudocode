/*
 * XREFs of HvpMarkCellDirty @ 0x1408DB070
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x140852334 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1408524A8 (CmpMarkCurrentValueDirty.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     CmpMarkAllChildrenDirty @ 0x1408662F0 (CmpMarkAllChildrenDirty.c)
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x1408C5D28 (CmpSplitLeaf.c)
 *     CmpSelectLeaf @ 0x1408C629C (CmpSelectLeaf.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 *     CmpClearKeyAccessBits @ 0x1408E5568 (CmpClearKeyAccessBits.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A1D604 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A1D918 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpMarkEntireIndexDirty @ 0x140A41298 (CmpMarkEntireIndexDirty.c)
 *     HvpIsFreeNeighbor @ 0x140A92FF0 (HvpIsFreeNeighbor.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140AD1290 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpInsertSecurityCellList @ 0x140AE3114 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE3604 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140AE52F8 (CmpUpdateHiveRootCellFlags.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AEAFF0 (CmpLightWeightCreateSetValueData.c)
 *     CmpMarkKeyParentDirty @ 0x140B00B7C (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140B1F2A4 (CmpMarkKeyValuesDirty.c)
 *     CmpSetValueKeyTombstone @ 0x140B51FF8 (CmpSetValueKeyTombstone.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, int a2, char a3)
{
  ULONG_PTR v4; // rsi
  __int64 CellFlat; // rax
  int v7; // edi
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v4 = (unsigned int)a2;
  if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 1) != 0 || a2 < 0 )
    return 0LL;
  if ( !a3 )
    HvLockHiveWriter(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, &v9);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( ((CellFlat - 4) & -(__int64)(CellFlat != 0)) != 0 )
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v4) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v4, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    v7 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    if ( v7 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
    return (unsigned int)v7;
  }
  else
  {
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    return 3221225626LL;
  }
}
