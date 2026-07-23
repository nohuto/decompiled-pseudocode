/*
 * XREFs of CmpSetValueKeyNew @ 0x1408E3FE4
 * Callers:
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpSetValueDataNew @ 0x1408E4628 (CmpSetValueDataNew.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        void *Src,
        size_t Size,
        unsigned int a8)
{
  unsigned int v8; // r15d
  unsigned int *v9; // r12
  int v12; // edi
  unsigned __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rbx
  _BYTE *v16; // rcx
  unsigned __int16 v17; // ax
  size_t v18; // r14
  unsigned int v19; // r14d
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h]

  v24 = a4;
  v8 = -1;
  v9 = (unsigned int *)(a2 + 36);
  if ( *(_DWORD *)(a2 + 36) )
  {
    v12 = HvpMarkCellDirty(BugCheckParameter2, *(_DWORD *)(a2 + 40), 0);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v21 = 0LL;
  v23 = -1;
  v22 = 0LL;
  HvpGetCellContextInitialize(&v21);
  v13 = CmpNameSize(a3);
  v14 = HvAllocateCell(BugCheckParameter2, (unsigned int)v13 + 20, a8, &v23, &v22, (__int64)&v21);
  v15 = v22;
  v12 = v14;
  if ( v14 < 0 )
    goto LABEL_22;
  v16 = (_BYTE *)(v22 + 20);
  *(_WORD *)v22 = 27510;
  v17 = CmpCopyName(v16, (const void **)a3);
  *(_WORD *)(v15 + 2) = v17;
  *(_WORD *)(v15 + 16) = v17 < *a3;
  v18 = (unsigned int)Size;
  *(_DWORD *)(v15 + 12) = a5;
  if ( (unsigned int)v18 <= 4 )
  {
    *(_DWORD *)(v15 + 4) = v18 + 0x80000000;
    *(_DWORD *)(v15 + 8) = 0;
    memmove((void *)(v15 + 8), Src, v18);
    goto LABEL_10;
  }
  v12 = CmpSetValueDataNew(BugCheckParameter2, Src, (unsigned int)v18, v15 + 8);
  if ( v12 < 0 )
  {
LABEL_22:
    v19 = v23;
    goto LABEL_11;
  }
  *(_DWORD *)(v15 + 4) = v18;
LABEL_10:
  v8 = v23;
  v19 = -1;
  v12 = 0;
LABEL_11:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v21);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
  }
  if ( v19 != -1 )
    HvFreeCell(BugCheckParameter2, v19);
  if ( v12 < 0 || (v12 = CmpAddValueToListEx(BugCheckParameter2, v8, v24, a8, v9, 1), v12 < 0) )
  {
    if ( v8 != -1 )
      CmpFreeValue(BugCheckParameter2, v8);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
