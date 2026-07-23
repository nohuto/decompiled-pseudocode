/*
 * XREFs of CmpMergeKeyValues @ 0x140B2DE64
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpInitializeValueNameString @ 0x1408C5BB4 (CmpInitializeValueNameString.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 */

__int64 __fastcall CmpMergeKeyValues(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _DWORD *a3,
        ULONG_PTR a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *v12; // r13
  struct _PRIVILEGE_SET *Pool; // r12
  int NameInListWithStatus; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r15d
  __int64 CellFlat; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  ULONG_PTR CellPaged; // rax
  __int16 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v24[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v25[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v26[12]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp+58h]

  BugCheckParameter3a = a4;
  LODWORD(v27) = a2;
  v6 = a6;
  v7 = 0;
  v25[1] = 0;
  LODWORD(v28) = 0;
  v25[0] = -1;
  v24[0] = -1;
  v10 = a3[15];
  LODWORD(v27) = 0;
  v24[1] = 0;
  *(_OWORD *)v26 = 0LL;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v6 + 64) < v11 )
    *(_DWORD *)(v6 + 64) = v11;
  v12 = (unsigned int *)(v6 + 36);
  if ( !*(_DWORD *)(v6 + 36) )
  {
    NameInListWithStatus = CmpSyncKeyValues(BugCheckParameter3, a5, v6, v22);
    if ( NameInListWithStatus < 0 )
      return (unsigned int)NameInListWithStatus;
    return 0;
  }
  LODWORD(a6) = a3[9];
  if ( !(_DWORD)a6 )
    return 0;
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
  if ( Pool )
  {
    v16 = (unsigned int)a3[10];
    v17 = a5 >> 31;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v16, v25);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v16);
    v19 = CellFlat;
    while ( v7 < (unsigned int)a6 )
    {
      v20 = *(unsigned int *)(v19 + 4LL * v7);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v20, v24);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, v20);
      CmpInitializeValueNameString(CellPaged, (__int64)v26, (__int64)Pool);
      NameInListWithStatus = CmpFindNameInListWithStatus(BugCheckParameter3a, v12, v26, 0, (unsigned int *)&v27, &v23);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v24);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v24);
      if ( NameInListWithStatus < 0 )
      {
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_21;
        NameInListWithStatus = CmpCopyValue(
                                 BugCheckParameter3,
                                 *(_DWORD *)(v19 + 4LL * v7),
                                 BugCheckParameter3a,
                                 v17,
                                 (unsigned int *)&v28);
        if ( NameInListWithStatus < 0 )
          goto LABEL_21;
        NameInListWithStatus = CmpAddValueToListEx(BugCheckParameter3a, v28, v27, v17, v12, 1);
        if ( NameInListWithStatus < 0 )
          goto LABEL_21;
      }
      ++v7;
    }
    NameInListWithStatus = 0;
LABEL_21:
    if ( v19 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v25);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v25);
    }
    CmSiFreeMemory(Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)NameInListWithStatus;
}
