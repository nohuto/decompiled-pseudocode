/*
 * XREFs of HvpMarkCellDirty @ 0x1408D4AB0
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x14084C024 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x14084C198 (CmpMarkCurrentValueDirty.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     CmpMarkAllChildrenDirty @ 0x140860000 (CmpMarkAllChildrenDirty.c)
 *     CmpProcessLightWeightUOW @ 0x1408AEB00 (CmpProcessLightWeightUOW.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpMarkKeyDirty @ 0x1408BCEC4 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1408BD1FC (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1408BD5D4 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x1408BD924 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408BEED0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408BF13C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSplitLeaf @ 0x1408BF758 (CmpSplitLeaf.c)
 *     CmpSelectLeaf @ 0x1408BFCCC (CmpSelectLeaf.c)
 *     CmpAddSubKeyEx @ 0x1408C04BC (CmpAddSubKeyEx.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpCopySyncTree2 @ 0x1408DE354 (CmpCopySyncTree2.c)
 *     CmpClearKeyAccessBits @ 0x1408DEFA8 (CmpClearKeyAccessBits.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14094D7E0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1409817F4 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A0752C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A07840 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A2DFD4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A2E5B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpMarkEntireIndexDirty @ 0x140A2F40C (CmpMarkEntireIndexDirty.c)
 *     HvpIsFreeNeighbor @ 0x140A8E320 (HvpIsFreeNeighbor.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140ACEF5C (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpInsertSecurityCellList @ 0x140AE5354 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE5844 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140AE7478 (CmpUpdateHiveRootCellFlags.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AE8DA0 (CmpLightWeightCreateSetValueData.c)
 *     CmpMarkKeyParentDirty @ 0x140AFEB0C (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140B1D094 (CmpMarkKeyValuesDirty.c)
 *     CmpSetValueKeyTombstone @ 0x140B4F768 (CmpSetValueKeyTombstone.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
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
