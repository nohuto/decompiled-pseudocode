/*
 * XREFs of HvReallocateCell @ 0x1408E3254
 * Callers:
 *     CmpRemoveValueFromList @ 0x1408C308C (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpSplitLeaf @ 0x1408C5D28 (CmpSplitLeaf.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpSetValueDataExisting @ 0x140B33210 (CmpSetValueDataExisting.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7)
{
  unsigned int v10; // r14d
  void *v11; // r15
  __int64 v12; // rdx
  __int64 CellFlat; // rax
  const void *v14; // rsi
  unsigned int v15; // r13d
  unsigned int v16; // edi
  _DWORD *v17; // rcx
  int v18; // edi
  unsigned int v20; // edx
  unsigned int v21; // edi
  int v22; // eax
  void *v23; // rdi
  _DWORD *v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+50h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  v28 = -1;
  v10 = BugCheckParameter3;
  HvpGetCellContextInitialize(&v27);
  v11 = 0LL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v25);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v12, (unsigned int *)&v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, v12);
  v14 = (const void *)CellFlat;
  v15 = -4 - *(_DWORD *)(CellFlat - 4);
  v16 = a3 + 4;
  if ( v16 <= -*(_DWORD *)(CellFlat - 4) )
  {
    v17 = a7;
    *a5 = v10;
    *a6 = CellFlat;
    HvpGetCellContextMove(v17, &v27);
    return 0;
  }
  v20 = 0x4000;
  v21 = (v16 + 7) & 0xFFFFFFF8;
  v22 = 0;
  while ( v21 > v20 )
  {
    v20 *= 2;
    ++v22;
  }
  if ( !v22 )
    v20 = v21;
  if ( v20 > 0x100000 )
  {
    v18 = -1073741670;
LABEL_19:
    if ( v14 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v27);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v27);
    }
    goto LABEL_20;
  }
  v18 = HvpDoAllocateCell(BugCheckParameter2, v20, v10 >> 31, &v28, &v26, &v25);
  if ( v18 < 0 )
  {
    v11 = v26;
    goto LABEL_19;
  }
  v23 = v26;
  memmove(v26, v14, v15);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v27);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v27);
  if ( a4 )
    HvFreeCell(BugCheckParameter2, v10);
  *a5 = v28;
  v24 = a7;
  *a6 = (__int64)v23;
  HvpGetCellContextMove(v24, &v25);
  v18 = 0;
LABEL_20:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v25);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v25);
  }
  return (unsigned int)v18;
}
