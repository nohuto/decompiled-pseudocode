/*
 * XREFs of HvFreeCell @ 0x1408D1528
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1404C83A0 (CmpDereferenceSecurityNode.c)
 *     CmpFreeKeyValueList @ 0x140779BDC (CmpFreeKeyValueList.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpRemoveValueFromList @ 0x1408BCABC (CmpRemoveValueFromList.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyExisting @ 0x1408BD1FC (CmpSetValueKeyExisting.c)
 *     CmpRemoveSubKeyFromList @ 0x1408BDBF0 (CmpRemoveSubKeyFromList.c)
 *     CmpFreeKeyBody @ 0x1408BDF54 (CmpFreeKeyBody.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSplitLeaf @ 0x1408BF758 (CmpSplitLeaf.c)
 *     CmpAddSubKeyEx @ 0x1408C04BC (CmpAddSubKeyEx.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1408D1074 (CmpFreeValueData.c)
 *     CmpAddToLeaf @ 0x1408D171C (CmpAddToLeaf.c)
 *     HvReallocateCell @ 0x1408DCC94 (HvReallocateCell.c)
 *     CmpCopyValue @ 0x1408DCE6C (CmpCopyValue.c)
 *     CmpAddValueKeyNew @ 0x1408DD5DC (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x1408DDBFC (CmpCopyKeyPartial.c)
 *     CmpSetValueDataNew @ 0x1408DE068 (CmpSetValueDataNew.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A0752C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A07840 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpDuplicateIndex @ 0x140A2EFF4 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140A2F4F0 (CmpFreeIndexByCell.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140AB1DB4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmpConcatenateValueLists @ 0x140AE7538 (CmpConcatenateValueLists.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AE8DA0 (CmpLightWeightCreateSetValueData.c)
 *     CmpFreeKeyValues @ 0x140B1CFA8 (CmpFreeKeyValues.c)
 *     CmpSetValueDataExisting @ 0x140B31010 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1408DC7D0 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     HvpIsFreeNeighbor @ 0x140A8E320 (HvpIsFreeNeighbor.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C586F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C58AA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rbp
  __int64 CellMap; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // r15d
  __int64 BinAddress; // rax
  _QWORD *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned int v13; // r10d
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // r10d
  int *v17; // rbx
  int *v18; // r8
  unsigned int v19; // r10d
  int v20; // ecx
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // r14
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  _DWORD v28[14]; // [rsp+30h] [rbp-38h]
  __int16 v29; // [rsp+80h] [rbp+18h] BYREF
  int *v30; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int)BugCheckParameter3;
  v29 = 0;
  v30 = 0LL;
  v4 = 0LL;
  HvpGetBinContextInitialize(&v29);
  HvLockHiveWriter(BugCheckParameter2);
  CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v2);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x73BuLL);
  v8 = (unsigned int)v2 >> 31;
  BinAddress = HvpMapEntryGetBinAddress(v6, CellMap, &v29, v7);
  v12 = BinAddress;
  if ( (*(_DWORD *)(v11 + 20) & 4) != 0 )
  {
    v13 = *(_DWORD *)(BinAddress + 4);
    v14 = v13 + *(_DWORD *)(BinAddress + 8);
    while ( v13 < v14 )
    {
      v15 = HvpGetCellMap(BugCheckParameter2, v13);
      *(_DWORD *)(v15 + 20) &= ~4u;
      v13 = v16 + 4096;
    }
  }
  v17 = (int *)(v12 + *v10 + (v2 & 0xFFF));
  *v17 = -*v17;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(
                            BugCheckParameter2,
                            v12,
                            (_DWORD)v17,
                            (unsigned int)&v30,
                            (unsigned int)v2 >> 31) != 1 )
      break;
    v18 = v30;
    v19 = v4 + 1;
    v20 = *v17;
    v21 = *v30;
    if ( v30 <= v17 )
    {
      *v30 = v21 + v20;
      v22 = v2 - v21;
      v17 = v18;
    }
    else
    {
      *v17 = v20 + v21;
      v22 = v20 + v2;
    }
    v28[v4] = v21;
    v28[v4 + 2] = v22;
    v4 = v19;
  }
  while ( v19 < 2 );
  v23 = (_DWORD)v17 + *(_DWORD *)(v12 + 4) + (v8 << 31) - v12;
  if ( (int)HvpMarkDirty(BugCheckParameter2) >= 0 )
    memset_0(v17 + 1, 252, *v17 - 4);
  if ( (_DWORD)v4 )
  {
    v24 = 0LL;
    do
    {
      v25 = (v28[v24] >> 3) - 1;
      if ( v25 >= 0x10 )
      {
        v26 = v25 >> 4;
        if ( v26 <= 0xFF )
        {
          _BitScanReverse(&v26, v26);
          v25 = v26 + 16;
        }
        else
        {
          v25 = 23;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, v28[v24 + 2], v25, v8, v23);
      ++v24;
      --v4;
    }
    while ( v4 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v23);
  return HvUnlockHiveWriter(BugCheckParameter2);
}
