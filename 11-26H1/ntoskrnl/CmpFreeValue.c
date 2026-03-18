/*
 * XREFs of CmpFreeValue @ 0x1408D0BF4
 * Callers:
 *     CmpFreeKeyValueList @ 0x140779BDC (CmpFreeKeyValueList.c)
 *     CmpCleanupLightWeightUoWData @ 0x14085BE94 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408BF13C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140AB1AF8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140AB1C48 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpFreeKeyValues @ 0x140B1CFA8 (CmpFreeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140B4F768 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeValueData @ 0x1408D1074 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  bool v2; // zf
  unsigned int v3; // edi
  __int64 CellPaged; // rax
  char v6; // al
  char v7; // cl
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v3 = BugCheckParameter3;
  v10 = 0;
  if ( v2 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v9);
  if ( !CellPaged )
    return 0;
  v6 = CmpFreeValueData(BugCheckParameter2);
  v7 = *(_BYTE *)(BugCheckParameter2 + 140) & 1;
  if ( !v6 )
  {
    if ( v7 )
      HvpReleaseCellFlat(BugCheckParameter2, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v9);
    return 0;
  }
  if ( v7 )
    HvpReleaseCellFlat(BugCheckParameter2, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v9);
  HvFreeCell(BugCheckParameter2, v3);
  return 1;
}
