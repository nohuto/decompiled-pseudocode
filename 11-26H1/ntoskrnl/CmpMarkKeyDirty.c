/*
 * XREFs of CmpMarkKeyDirty @ 0x1408C3494
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirty @ 0x1408C3D30 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter3, unsigned int a2, char a3)
{
  unsigned int v3; // r15d
  char v5; // r13
  bool v6; // zf
  __int64 v8; // r14
  __int64 CellPaged; // rax
  __int64 v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  __int64 CellFlat; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int *v20; // rdx
  unsigned int v21[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v22[2]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v23[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+40h] BYREF
  int v25; // [rsp+84h] [rbp+44h]
  unsigned int v26; // [rsp+88h] [rbp+48h]
  char v27; // [rsp+90h] [rbp+50h]

  v27 = a3;
  v26 = a2;
  v3 = 0;
  v23[1] = 0;
  v5 = a3;
  v23[0] = -1;
  v22[0] = -1;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v24 = -1;
  v8 = 0LL;
  v21[0] = -1;
  v22[1] = 0;
  v25 = 0;
  v21[1] = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, v23);
  v10 = CellPaged;
  if ( (*(_BYTE *)(CellPaged + 2) & 2) != 0 )
  {
    v11 = 0;
    goto LABEL_37;
  }
  v11 = HvpMarkCellDirty(BugCheckParameter3, a2);
  if ( v11 < 0 )
    goto LABEL_37;
  v12 = *(unsigned int *)(v10 + 48);
  if ( (_DWORD)v12 != -1 )
  {
    v11 = HvpMarkCellDirty(BugCheckParameter3, v12);
    if ( v11 < 0 )
      goto LABEL_37;
  }
  v13 = *(unsigned int *)(v10 + 44);
  if ( (_DWORD)v13 != -1 )
  {
    v11 = HvpMarkCellDirty(BugCheckParameter3, v13);
    if ( v11 < 0 )
      goto LABEL_37;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v10 + 44), &v24);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v15 = CellFlat;
    v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4));
    if ( v11 < 0 || (v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v15 + 8)), v11 < 0) )
    {
      if ( !v15 )
        goto LABEL_37;
      v20 = &v24;
      goto LABEL_53;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
    v3 = 0;
  }
  if ( (*(_BYTE *)(v10 + 2) & 0x40) != 0 || !*(_DWORD *)(v10 + 36) )
  {
LABEL_30:
    if ( (*(_BYTE *)(v10 + 2) & 4) != 0
      || !v5
      || (v11 = CmpMarkIndexDirty(BugCheckParameter3), v11 >= 0)
      && (v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 16)), v11 >= 0) )
    {
      v11 = 0;
    }
    goto LABEL_34;
  }
  v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 40));
  if ( v11 < 0 )
    goto LABEL_37;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v16 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v10 + 40), v22);
  else
    v16 = HvpGetCellPaged(BugCheckParameter3);
  v8 = v16;
  while ( 1 )
  {
    if ( v3 >= *(_DWORD *)(v10 + 36) )
    {
      v5 = v27;
      goto LABEL_30;
    }
    v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4LL * v3));
    if ( v11 < 0 )
      goto LABEL_34;
    v17 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v8 + 4LL * v3), v21)
        : HvpGetCellPaged(BugCheckParameter3);
    v18 = v17;
    v11 = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( v11 < 0 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v21);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v21);
    ++v3;
  }
  if ( !v18 )
    goto LABEL_34;
  v20 = v21;
LABEL_53:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v20);
LABEL_34:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v22);
  }
LABEL_37:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v23);
  return (unsigned int)v11;
}
