/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x140A50568
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A4FF48 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  size_t v9; // r15
  struct _PRIVILEGE_SET *Pool; // rsi
  __int64 v12; // rdx
  __int64 CellFlat; // rax
  unsigned int *v14; // r12
  unsigned int *v15; // rbp
  _QWORD *p_PrivilegeCount; // r13
  __int64 v17; // rdx
  __int64 CellPaged; // rax
  __int64 v19; // r13
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  size_t v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v20 = 0LL;
  HvpGetCellContextInitialize(&v20);
  *(_QWORD *)a1 = v7;
  v9 = *(unsigned int *)(v8 + 36);
  if ( (_DWORD)v9 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    if ( Pool )
    {
      v22 = CmpAllocatePool(0x100uLL);
      if ( v22 )
      {
        v12 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(a2, v12, (unsigned int *)&v20);
        else
          CellFlat = HvpGetCellPaged(a2, v12);
        v14 = (unsigned int *)CellFlat;
        v15 = (unsigned int *)v22;
        p_PrivilegeCount = &Pool->PrivilegeCount;
        v21 = v9;
        do
        {
          HvpGetCellContextInitialize(v15);
          v17 = *v14;
          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(a2, v17, v15);
          else
            CellPaged = HvpGetCellPaged(a2, v17);
          *p_PrivilegeCount = CellPaged;
          v15 += 2;
          ++p_PrivilegeCount;
          ++v14;
          --v21;
        }
        while ( v21 );
        v19 = v22;
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a2, (__int64)&v20);
        else
          HvpReleaseCellPaged(a2, (unsigned int *)&v20);
        qsort(Pool, v9, 8uLL, (int (__cdecl *)(const void *, const void *))CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = Pool;
        *(_QWORD *)(a1 + 16) = v19;
        *(_DWORD *)(a1 + 24) = v9;
      }
      else
      {
        v4 = -1073741670;
        CmSiFreeMemory(Pool);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
