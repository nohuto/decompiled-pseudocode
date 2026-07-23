/*
 * XREFs of CmpFreeValue @ 0x1408D71B4
 * Callers:
 *     CmpFreeKeyValueList @ 0x14077CB0C (CmpFreeKeyValueList.c)
 *     CmpCleanupLightWeightUoWData @ 0x140862184 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140AAFA18 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140AAFB68 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpFreeKeyValues @ 0x140B1F1B8 (CmpFreeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140B51FF8 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeValueData @ 0x1408D7634 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
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
