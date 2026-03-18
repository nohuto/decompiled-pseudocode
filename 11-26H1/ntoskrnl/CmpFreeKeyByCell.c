/*
 * XREFs of CmpFreeKeyByCell @ 0x1408BCC94
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404CC980 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14085BE94 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1409817F4 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14098335C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x140987238 (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A2E164 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A2E5B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B50C8C (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpMarkKeyDirty @ 0x1408BCEC4 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x1408BDB40 (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x1408BDF54 (CmpFreeKeyBody.c)
 *     CmpFreeSecurityDescriptor @ 0x1408BE66C (CmpFreeSecurityDescriptor.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmLockHiveSecurityExclusive @ 0x1408DF19C (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter3, unsigned int a2, char a3)
{
  unsigned int v3; // esi
  signed int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 CellPaged; // rax
  __int64 v13; // r15
  unsigned int v14[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+38h] BYREF
  int v17; // [rsp+6Ch] [rbp+3Ch]

  v3 = 0;
  v16 = -1;
  v17 = 0;
  v14[1] = 0;
  v15[1] = 0;
  v14[0] = -1;
  v15[0] = -1;
  CmLockHiveSecurityExclusive(BugCheckParameter3);
  v7 = CmpMarkKeyDirty(BugCheckParameter3);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v16);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter3) )
      goto LABEL_37;
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v9 + 16), v14)
        : HvpGetCellPaged(BugCheckParameter3);
    if ( !v10 )
      goto LABEL_37;
    if ( !(*(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24)) )
    {
      *(_WORD *)(v10 + 52) = 0;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v14);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x42) == 0 )
  {
    if ( !*(_DWORD *)(v9 + 36) )
    {
LABEL_16:
      if ( *(_DWORD *)(v9 + 44) != -1 )
        CmpFreeSecurityDescriptor(BugCheckParameter3);
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v9 + 40), v15);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v13 = CellPaged;
    if ( CellPaged )
    {
      if ( *(_DWORD *)(v9 + 36) )
      {
        do
          CmpFreeValue(BugCheckParameter3, *(unsigned int *)(v13 + 4LL * v3++));
        while ( v3 < *(_DWORD *)(v9 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v15);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v15);
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v9 + 40));
      goto LABEL_16;
    }
LABEL_37:
    v7 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
    goto LABEL_21;
  }
LABEL_18:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v16);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v16);
  v7 = (unsigned __int8)CmpFreeKeyBody(BugCheckParameter3, a2) == 0 ? 0xC000009A : 0;
LABEL_21:
  CmUnlockHiveSecurity(BugCheckParameter3);
  return (unsigned int)v7;
}
