/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1404C83A0
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeSecurityDescriptor @ 0x1408BE66C (CmpFreeSecurityDescriptor.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE5B18 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140AE5C70 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpKeySecurityDecrementReferenceCount @ 0x1404C8464 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404C84A4 (CmpRemoveSecurityCellList.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  HvpGetCellContextInitialize(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  result = CmpKeySecurityDecrementReferenceCount(CellFlat, BugCheckParameter3, a2);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
    CmpRemoveSecurityCellList(BugCheckParameter3);
    return HvFreeCell(BugCheckParameter3, a2);
  }
  else if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v8);
  }
  return result;
}
