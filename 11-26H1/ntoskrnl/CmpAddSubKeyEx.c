/*
 * XREFs of CmpAddSubKeyEx @ 0x1408C6A8C
 * Callers:
 *     CmpAddSubKey @ 0x1408C6284 (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 */

__int64 __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edx
  __int64 CellFlat; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  _WORD *CellPaged; // rax
  _WORD *v12; // r13
  _WORD *v13; // rsi
  int Cell; // edi
  __int16 v16; // si
  __int64 v17; // rax
  unsigned int i; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  HvpGetCellContextInitialize(&v23);
  v22 = 0LL;
  HvpGetCellContextInitialize(&v21);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, (unsigned int *)&v23);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  v8 = a3 >> 31;
  v9 = v8;
  if ( *(_DWORD *)(v7 + 4 * v8 + 20) )
  {
    v10 = v7 + 4 * v8;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v10 + 28), (unsigned int *)&v21);
    else
      CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
    v12 = CellPaged + 1;
    v13 = CellPaged;
    if ( *CellPaged != 26220 )
    {
      if ( ((*CellPaged - 26732) & 0xFEFF) != 0 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( *v12 < 0x1FBu )
      goto LABEL_9;
    Cell = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 28));
    if ( Cell >= 0 )
    {
      for ( i = 0; i < (unsigned __int16)*v12; *(_DWORD *)&v13[2 * v19 + 2] = *(_DWORD *)&v13[4 * v19 + 2] )
        v19 = i++;
      *v13 = 26988;
LABEL_8:
      if ( *v12 < 0x3F5u )
        goto LABEL_9;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v21);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v21);
      v22 = 0LL;
      v13 = 0LL;
      Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v22, (__int64)&v21);
      if ( Cell < 0 )
      {
        v13 = (_WORD *)v22;
        goto LABEL_10;
      }
      v20 = v22;
      *(_DWORD *)v22 = 92530;
      *(_DWORD *)(v20 + 4) = *(_DWORD *)(v7 + 4 * v9 + 28);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v21);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v21);
      *(_DWORD *)(v7 + 4 * v9 + 28) = -1;
LABEL_9:
      Cell = CmpAddSubKeyToList(BugCheckParameter3);
      if ( Cell < 0 )
        goto LABEL_10;
      goto LABEL_28;
    }
  }
  else
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
      v16 = 26220;
    else
      v16 = 26732;
    Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v22, (__int64)&v21);
    if ( Cell >= 0 )
    {
      v17 = v22;
      *(_WORD *)v22 = v16;
      *(_WORD *)(v17 + 2) = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v21);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v21);
      v13 = 0LL;
      Cell = CmpAddSubKeyToList(BugCheckParameter3);
      if ( Cell >= 0 )
      {
        *(_DWORD *)(v7 + 4 * v9 + 28) = -1;
LABEL_28:
        ++*(_DWORD *)(v7 + 4 * v9 + 20);
        Cell = 0;
      }
    }
    else
    {
      v13 = (_WORD *)v22;
    }
  }
LABEL_10:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v23);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v21);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v21);
  }
  return (unsigned int)Cell;
}
