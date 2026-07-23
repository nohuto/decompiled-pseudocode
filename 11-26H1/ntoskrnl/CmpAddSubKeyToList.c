/*
 * XREFs of CmpAddSubKeyToList @ 0x1408C7F40
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpSelectLeaf @ 0x1408C629C (CmpSelectLeaf.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int16 v8; // cx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // edi
  _WORD *CellPaged; // rax
  _WORD *v14; // rsi
  int v15; // edi
  _DWORD *v16; // rcx
  ULONG_PTR *p_BugCheckParameter3a; // rdx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+90h] [rbp+40h]
  ULONG_PTR BugCheckParameter3a; // [rsp+A8h] [rbp+58h] BYREF

  v19 = 0LL;
  BugCheckParameter3a = 0LL;
  v21 = 0LL;
  HvpGetCellContextInitialize(&BugCheckParameter3a);
  HvpGetCellContextInitialize(&v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, (unsigned int *)&BugCheckParameter3a);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  v8 = *(_WORD *)(CellFlat + 72);
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    v9 = (unsigned __int16)(2 * v8);
    LOWORD(v21) = 2 * v8;
    WORD1(v21) = 2 * v8;
    v10 = guard_dispatch_icall_no_overrides((unsigned __int16)(2 * v8), 0LL);
    *((_QWORD *)&v21 + 1) = v10;
    v11 = v10;
    if ( !v10 )
    {
      v15 = -1073741670;
      if ( !v7 )
        return (unsigned int)v15;
      p_BugCheckParameter3a = &BugCheckParameter3a;
      goto LABEL_18;
    }
    v22 = 1;
    CmpCopyCompressedName(v10, v9, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v22 = 0;
    LOWORD(v9) = *(_WORD *)(CellFlat + 72);
    v11 = CellFlat + 76;
    LOWORD(v21) = v9;
    *((_QWORD *)&v21 + 1) = CellFlat + 76;
    WORD1(v21) = v8;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &BugCheckParameter3a);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &BugCheckParameter3a);
  v12 = *a2;
  LODWORD(BugCheckParameter3a) = v12;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v12, (unsigned int *)&v19);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v14 = CellPaged;
  v20 = 0LL;
  if ( *CellPaged == 26994 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v19);
    v14 = 0LL;
    v15 = CmpSelectLeaf(BugCheckParameter3, a2, (__int64)&v21, a3 >> 31, &v20, (unsigned int *)&BugCheckParameter3a);
    if ( v15 < 0 )
      goto LABEL_14;
    v15 = CmpAddToLeaf(BugCheckParameter3, (unsigned int)BugCheckParameter3a, (__int64)&BugCheckParameter3a);
    if ( v15 < 0 )
      goto LABEL_14;
    v16 = (_DWORD *)v20;
  }
  else
  {
    v15 = CmpAddToLeaf(BugCheckParameter3, v12, (__int64)&BugCheckParameter3a);
    if ( v15 < 0 )
      goto LABEL_14;
    v16 = a2;
  }
  v15 = 0;
  *v16 = BugCheckParameter3a;
LABEL_14:
  if ( v22 )
    guard_dispatch_icall_no_overrides(v11, (unsigned __int16)v9);
  if ( v14 )
  {
    p_BugCheckParameter3a = (ULONG_PTR *)&v19;
LABEL_18:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, p_BugCheckParameter3a);
    else
      HvpReleaseCellPaged(BugCheckParameter3, p_BugCheckParameter3a);
  }
  return (unsigned int)v15;
}
