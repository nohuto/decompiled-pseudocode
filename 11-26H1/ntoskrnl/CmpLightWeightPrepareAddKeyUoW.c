/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpLightWeightCreateModificationData @ 0x140A40714 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A40B28 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  int v9; // esi
  bool v10; // zf
  __int64 v11; // rdx
  __int64 CellPaged; // rax
  __int64 v13; // r13
  _DWORD *v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v21[2]; // [rsp+48h] [rbp-20h] BYREF
  _DWORD *v22; // [rsp+50h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-10h] BYREF
  int v24; // [rsp+B0h] [rbp+48h]
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+60h]

  v21[1] = 0;
  v21[0] = -1;
  v2 = -1;
  v26 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v20 = 0xFFFFFFFFLL;
  LODWORD(v25) = -1;
  v5 = *(_QWORD *)(v4 + 32);
  v24 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 80);
  v27 = 0LL;
  v23 = 0LL;
  v7 = *(_DWORD **)(v6 + 104);
  v22 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v8 = CmpLightWeightCreateModificationData(a1, &v22);
    v7 = v22;
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_19;
  }
  v10 = (*(_BYTE *)(v5 + 140) & 1) == 0;
  v22 = *(_DWORD **)(*(_QWORD *)(a1 + 48) + 72LL);
  v11 = (unsigned int)v22[10];
  if ( v10 )
    CellPaged = HvpGetCellPaged(v5, v11);
  else
    CellPaged = HvpGetCellFlat(v5, v11, v21);
  v13 = CellPaged;
  if ( CellPaged )
  {
    v9 = HvpMarkCellDirty(v5, *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL), 1);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = HvpMarkCellDirty(v5, v22[10], 1);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = HvpMarkCellDirty(v5, *(_DWORD *)(v13 + 4LL * v24 + 28), 1);
    if ( v9 >= 0 )
    {
      v14 = &v7[v24];
      if ( v14[3] == -1 )
      {
        LODWORD(v27) = *(_DWORD *)(v5 + 220);
        v9 = HvAllocateCell(v5, 12, v24, &v26, &v23, (__int64)&v20);
        if ( v9 < 0 )
        {
          v3 = v23;
LABEL_14:
          if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v5, (__int64)v21);
          else
            HvpReleaseCellPaged(v5, v21);
          goto LABEL_16;
        }
        v18 = v23;
        *(_WORD *)v23 = (unsigned int)v27 < 5 ? 26220 : 26732;
        *(_WORD *)(v18 + 2) = 0;
        v14[3] = v26;
        v7[v24 + 1] = 0;
        if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v5, (__int64)&v20);
        else
          HvpReleaseCellPaged(v5, (unsigned int *)&v20);
        v27 = 0LL;
      }
      v15 = CmpCopyKeyPartial(
              v5,
              *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
              v5,
              v22[10],
              38,
              v19,
              v24,
              (unsigned int *)&v25);
      v2 = v25;
      v9 = v15;
      if ( v15 >= 0 )
      {
        v9 = CmpAddSubKeyToList(v5, v14 + 3, v25);
        if ( v9 >= 0 )
        {
          ++v7[v24 + 1];
          v9 = 0;
          v16 = *(_QWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 88) = *(_DWORD *)(v16 + 40);
          *(_DWORD *)(v16 + 40) = v2;
          v2 = -1;
          *(_QWORD *)(a1 + 104) = v7;
          v7 = 0LL;
        }
      }
    }
    v3 = v27;
    goto LABEL_14;
  }
  v9 = -1073741670;
LABEL_16:
  if ( v3 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v5, (__int64)&v20);
    else
      HvpReleaseCellPaged(v5, (unsigned int *)&v20);
  }
  if ( v2 != -1 )
    CmpFreeKeyByCell(v5, v2, 0);
LABEL_19:
  if ( v7 )
  {
    CmpLightWeightCleanupModifyKeyDataUoW(v5);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return (unsigned int)v9;
}
