/*
 * XREFs of CmpConcatenateValueLists @ 0x140AE53B8
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 */

__int64 __fastcall CmpConcatenateValueLists(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  _DWORD *v10; // rdx
  unsigned int v11; // r15d
  int v12; // eax
  char *v13; // r12
  unsigned int v14; // edi
  int v15; // edi
  __int64 v16; // rdx
  const void *CellPaged; // rax
  unsigned int *v18; // rcx
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned int *v22; // rax
  __int64 v23; // rdx
  const void *CellFlat; // rax
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+38h] BYREF
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = -1;
  HvpGetCellContextInitialize(&v25);
  HvpGetCellContextInitialize(&v28);
  LODWORD(v10) = *v10;
  v11 = (_DWORD)v10 + *a3;
  if ( v11 < (unsigned int)v10 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v11 )
  {
    v12 = HvAllocateCell(BugCheckParameter2, 4 * v11, v9, &v27, &v26, (__int64)&v25);
    v13 = (char *)v26;
    v14 = v12;
    if ( v12 < 0 )
    {
      v19 = v27;
    }
    else
    {
      v15 = 0;
      if ( *a2 )
      {
        v23 = a2[1];
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellFlat = (const void *)HvpGetCellFlat(BugCheckParameter2, v23, (unsigned int *)&v28);
        else
          CellFlat = (const void *)HvpGetCellPaged(BugCheckParameter2, v23);
        memmove(v13, CellFlat, 4LL * *a2);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v28);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
        v15 = *a2;
      }
      if ( *a3 )
      {
        v16 = a3[1];
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellPaged = (const void *)HvpGetCellFlat(BugCheckParameter2, v16, (unsigned int *)&v28);
        else
          CellPaged = (const void *)HvpGetCellPaged(BugCheckParameter2, v16);
        memmove(&v13[4 * v15], CellPaged, 4LL * *a3);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v28);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
      }
      v18 = a5;
      v19 = -1;
      v20 = v27;
      v14 = 0;
      *a5 = v11;
      v18[1] = v20;
    }
    if ( v13 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v25);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v25);
    }
    if ( v19 != -1 )
      HvFreeCell(BugCheckParameter2, v19);
  }
  else
  {
    v22 = a5;
    v14 = 0;
    *a5 = 0;
    v22[1] = v8;
  }
  return v14;
}
