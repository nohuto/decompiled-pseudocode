/*
 * XREFs of CmpSetValueDataNew @ 0x1408E4628
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpAddValueKeyNew @ 0x1408E3B9C (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 */

__int64 __fastcall CmpSetValueDataNew(
        ULONG_PTR BugCheckParameter2,
        char *Src,
        size_t Size,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r14
  __int64 result; // rax
  __int64 *v10; // rdx
  unsigned int *v11; // r13
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // r13
  int Cell; // r15d
  unsigned int *v16; // rcx
  ULONG_PTR v17; // rdx
  unsigned int *v18; // r15
  unsigned int i; // r13d
  size_t v20; // r8
  unsigned __int16 v21; // ax
  ULONG_PTR v22; // rdx
  bool v23; // zf
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  void *v28[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v5 = (unsigned int)Size;
  v28[0] = 0LL;
  v24 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(BugCheckParameter2 + 220) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = HvAllocateCell(BugCheckParameter2, Size, a4, a5, v28, (__int64)&v24);
    if ( (int)result < 0 )
      return result;
    memmove(v28[0], Src, v5);
    v10 = &v24;
    goto LABEL_5;
  }
  v11 = a5;
  v26 = 0xFFFFFFFFLL;
  v25 = 0xFFFFFFFFLL;
  v29 = 0LL;
  v27 = 0LL;
  result = HvAllocateCell(BugCheckParameter2, 8, a4, a5, &v29, (__int64)&v26);
  if ( (int)result < 0 )
    return result;
  v12 = v29;
  v13 = v5 + 16343;
  *(_DWORD *)v29 = 25188;
  *(_DWORD *)(v12 + 4) = -1;
  if ( (int)v5 + 16343 < (unsigned int)v5 || v13 >= 0x3FD80000 )
  {
    Cell = -1073741675;
  }
  else
  {
    v14 = (unsigned __int16)(v13 / 0x3FD8);
    LODWORD(v29) = v14;
    Cell = HvAllocateCell(BugCheckParameter2, 4 * (int)v14, a4, (unsigned int *)(v12 + 4), &v27, (__int64)&v25);
    if ( Cell >= 0 )
    {
      v18 = (unsigned int *)v27;
      if ( (_DWORD)v14 )
        memset_0(v27, -1, 4 * v14);
      for ( i = 0; i < (unsigned int)v29; ++i )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, v30, &v18[*(unsigned __int16 *)(v12 + 2)], v28, (__int64)&v24);
        if ( Cell < 0 )
          goto LABEL_13;
        v20 = (unsigned int)v5;
        if ( (unsigned int)v5 > 0x3FD8 )
          v20 = 16344LL;
        memmove(v28[0], Src, v20);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v24);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v24);
        ++*(_WORD *)(v12 + 2);
        v18 = (unsigned int *)v27;
        Src += 16344;
        LODWORD(v5) = v5 - 16344;
        v28[0] = 0LL;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v25);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v25);
      v10 = &v26;
LABEL_5:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)v10);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)v10);
      return 0LL;
    }
LABEL_13:
    v16 = (unsigned int *)v27;
    if ( v27 )
    {
      v21 = *(_WORD *)(v12 + 2);
      if ( v21 )
      {
        do
        {
          v22 = v16[v21];
          if ( (_DWORD)v22 != -1 )
          {
            HvFreeCell(BugCheckParameter2, v22);
            v16 = (unsigned int *)v27;
          }
          v23 = (*(_WORD *)(v12 + 2))-- == 1;
          v21 = *(_WORD *)(v12 + 2);
        }
        while ( !v23 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v25);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v25);
    }
    v11 = a5;
  }
  v17 = *(unsigned int *)(v12 + 4);
  if ( (_DWORD)v17 != -1 )
    HvFreeCell(BugCheckParameter2, v17);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v26);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
  HvFreeCell(BugCheckParameter2, *v11);
  result = (unsigned int)Cell;
  *v11 = -1;
  return result;
}
