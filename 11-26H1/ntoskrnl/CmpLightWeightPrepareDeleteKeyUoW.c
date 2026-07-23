/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408650A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1408C41C0 (CmpRemoveSubKeyFromList.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpLightWeightCreateModificationData @ 0x140A40714 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A40B28 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A40C9C (CmpCleanupDiscardReplaceContext.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v2; // rax
  struct _PRIVILEGE_SET *v5; // rsi
  ULONG_PTR v6; // rbp
  _DWORD *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 CellFlat; // rax
  int v10; // ebx
  __int64 v11; // rax
  int v13; // eax
  __int64 Pool; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+64h] [rbp+Ch]
  _DWORD *v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1[6];
  v17 = -1;
  v18 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_DWORD **)(a1[10] + 104);
  v19 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v13 = CmpLightWeightCreateModificationData(a1, &v19);
    v7 = v19;
    v10 = v13;
    if ( v13 < 0 )
      goto LABEL_13;
  }
  v8 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v8, &v17);
  else
    CellFlat = HvpGetCellPaged(v6, v8);
  if ( !CellFlat )
    goto LABEL_22;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, (__int64)&v17);
  else
    HvpReleaseCellPaged(v6, &v17);
  v10 = CmpMarkKeyDirty(v6, v8, 0);
  if ( v10 < 0 )
    goto LABEL_13;
  v10 = HvpMarkCellDirty(v6, *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v10 < 0 )
    goto LABEL_13;
  v11 = *(_QWORD *)(a1[6] + 192);
  if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    v5 = (struct _PRIVILEGE_SET *)Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      v15 = Pool;
      *(_DWORD *)(Pool + 12) = 0;
      *(_DWORD *)(Pool + 8) = -1073741823;
      v16 = (_QWORD *)(Pool + 16);
      v16[1] = v16;
      *v16 = v16;
      v10 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v15);
      if ( v10 < 0 )
      {
LABEL_21:
        CmpCleanupDiscardReplaceContext(v5, a2);
        CmSiFreeMemory(v5);
        goto LABEL_13;
      }
      goto LABEL_11;
    }
LABEL_22:
    v10 = -1073741670;
    goto LABEL_13;
  }
LABEL_11:
  if ( CmpRemoveSubKeyFromList(v6, &v7[(v8 >> 31) + 3], v8) )
  {
    --v7[(v8 >> 31) + 1];
    a1[13] = (ULONG_PTR)v7;
    v7 = 0LL;
    v10 = 0;
    a1[14] = (ULONG_PTR)v5;
    goto LABEL_13;
  }
  v10 = -1073741670;
  if ( v5 )
    goto LABEL_21;
LABEL_13:
  if ( v7 )
    CmpLightWeightCleanupModifyKeyDataUoW(v6);
  return (unsigned int)v10;
}
