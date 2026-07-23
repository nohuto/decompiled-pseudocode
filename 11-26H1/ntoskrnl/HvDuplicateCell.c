/*
 * XREFs of HvDuplicateCell @ 0x140A4115C
 * Callers:
 *     CmpDuplicateIndex @ 0x140A40E80 (CmpDuplicateIndex.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A41064 (CmpCloneKCBValueListForTrans.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 */

__int64 __fastcall HvDuplicateCell(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  const void *v10; // r14
  int v11; // r15d
  int v12; // eax
  void *v13; // rdi
  unsigned int v14; // esi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  void *v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v19 = -1;
  HvpGetCellContextInitialize(&v16);
  v18 = 0LL;
  HvpGetCellContextInitialize(&v17);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v8, (unsigned int *)&v16);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, v8);
  v10 = (const void *)CellFlat;
  v11 = -4 - *(_DWORD *)(CellFlat - 4);
  v12 = HvAllocateCell(BugCheckParameter2, v11, a3, &v19, &v18, (__int64)&v17);
  v13 = v18;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( a4 == 1 )
      memmove(v18, v10, v11);
    else
      memset_0(v18, 0, v11);
    v14 = 0;
    *a5 = v19;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v16);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v16);
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v17);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v17);
  }
  return v14;
}
