/*
 * XREFs of CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSingleKeyFromKeyNodeStacks(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 EntryAtLayerHeight; // r14
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  ULONG_PTR v14; // rbp
  int v15; // esi
  unsigned int v16; // ebx
  __int64 v17; // rax
  char v18; // cl
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // ax
  __int64 v21; // rdx
  __int64 CellFlat; // rax
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v24 = -1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v3);
  v9 = CmpKeyNodeStackGetEntryAtLayerHeight(v6, v5);
  if ( *(_DWORD *)(EntryAtLayerHeight + 8) == -1 )
  {
    v10 = 0LL;
    while ( (v7 & 0x8000u) == 0LL )
    {
      v11 = CmpKeyNodeStackGetEntryAtLayerHeight(v8, v7);
      if ( *(_DWORD *)(v11 + 8) != -1 )
      {
        v10 = v11;
        break;
      }
      LOWORD(v7) = v7 - 1;
    }
    v12 = *(unsigned int *)(v9 + 8);
    if ( (int)v12 < 0 )
      v13 = 1;
    else
      v13 = *(_DWORD *)(v10 + 8) >> 31;
    v14 = *(_QWORD *)v9;
    v15 = CmpCopyMergeOfLayeredKeyNode(v8, *(_QWORD *)v9, v12, 2LL, v13, &v24);
    if ( v15 < 0 || (v15 = HvpMarkCellDirty(v14, *(_DWORD *)(v9 + 8), 0), v15 < 0) )
    {
      v16 = v24;
    }
    else
    {
      v16 = v24;
      v15 = CmpAddSubKeyEx(v14, *(unsigned int *)(v9 + 8), v24);
      if ( v15 >= 0 )
      {
        v17 = *(_QWORD *)(v10 + 16);
        v18 = *(_BYTE *)(v17 + 2);
        v19 = *(_WORD *)(v17 + 72);
        v20 = 2 * v19;
        if ( (v18 & 0x20) == 0 )
          v20 = v19;
        v21 = *(_QWORD *)(v9 + 16);
        if ( (unsigned __int16)*(_DWORD *)(v21 + 52) < (unsigned int)v20 )
          *(_WORD *)(v21 + 52) = v20;
        *(_QWORD *)EntryAtLayerHeight = v14;
        *(_DWORD *)(EntryAtLayerHeight + 8) = v16;
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v14, v16, (unsigned int *)(EntryAtLayerHeight + 24));
        else
          CellFlat = HvpGetCellPaged(v14, v16);
        *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
        v16 = -1;
        v15 = 0;
      }
    }
    if ( v16 != -1 )
      CmpFreeKeyByCell(v14, v16, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v15;
}
