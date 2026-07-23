/*
 * XREFs of CmpAddValueKeyNew @ 0x1408E3B9C
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 *     CmpSetValueDataNew @ 0x1408E4628 (CmpSetValueDataNew.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r14d
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  unsigned int v18; // edi
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v20 = -1;
  v21 = 0LL;
  v22 = 0LL;
  HvpGetCellContextInitialize(&v21);
  v12 = CmpNameSize(v11);
  v13 = HvAllocateCell(BugCheckParameter2, (unsigned int)v12 + 20, a6, &v20, &v22, (__int64)&v21);
  v14 = v22;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v16 = v22 + 20;
    *(_WORD *)v22 = 27510;
    v17 = CmpCopyName(v16, a2);
    *(_WORD *)(v14 + 2) = v17;
    *(_WORD *)(v14 + 16) = v17 < *a2;
    *(_DWORD *)(v14 + 12) = a3;
    if ( (unsigned int)Size <= 4 )
    {
      *(_DWORD *)(v14 + 4) = Size + 0x80000000;
      *(_DWORD *)(v14 + 8) = 0;
      memmove((void *)(v14 + 8), a4, (unsigned int)Size);
      goto LABEL_8;
    }
    v15 = CmpSetValueDataNew(BugCheckParameter2, a4, (unsigned int)Size, v14 + 8);
    if ( v15 >= 0 )
    {
      *(_DWORD *)(v14 + 4) = Size;
LABEL_8:
      v18 = -1;
      v15 = 0;
      *a7 = v20;
      goto LABEL_9;
    }
  }
  v18 = v20;
LABEL_9:
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v21);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
  }
  if ( v18 != -1 )
    HvFreeCell(BugCheckParameter2, v18);
  return (unsigned int)v15;
}
