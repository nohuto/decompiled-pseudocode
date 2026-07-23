/*
 * XREFs of MmManagePartitionCreateLargePages @ 0x1407809E4
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiDefragmentAllSlabAllocators @ 0x14049A638 (MiDefragmentAllSlabAllocators.c)
 *     MiGetLargestPageIndex @ 0x1404C630C (MiGetLargestPageIndex.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmManagePartitionCreateLargePages(__int64 *a1, __int64 a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned int LargestPageIndex; // eax
  unsigned int v10; // esi
  __int64 *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx

  v5 = 0;
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( *(_DWORD *)a2 )
    return (unsigned int)-1073741811;
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 >= (unsigned __int16)KeNumberNodes && v6 != -1 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a2 + 8);
  if ( (v7 & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  v8 = v7 >> 12;
  LargestPageIndex = MiGetLargestPageIndex();
  v10 = LargestPageIndex;
  if ( LargestPageIndex >= 3 )
  {
LABEL_12:
    if ( v10 == 3 )
      return (unsigned int)-1073741637;
  }
  else
  {
    v11 = &MiPageSizes[LargestPageIndex];
    while ( *v11 != v8 )
    {
      ++v10;
      ++v11;
      if ( v10 >= 3 )
        goto LABEL_12;
    }
  }
  v12 = *(_QWORD *)(a2 + 16);
  if ( !v12 || v12 >= 0xFFFFFFFFFFFFFFFFuLL / v8 )
    return (unsigned int)-1073741811;
  if ( v6 == -1 && v10 )
    return (unsigned int)-1073741637;
  v13 = *a1;
  v14 = MiDefragmentAllSlabAllocators(v13, v6, v10, v12);
  v15 = *(_QWORD *)(a2 + 16);
  v16 = v14 + *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v16;
  if ( v16 < v15 && v6 != -1 )
  {
    if ( v10 )
      *(_QWORD *)(a2 + 24) += MiRebuildLargePage(v13, v6, v10, v8 * (v15 - v16), 1) / v8;
    else
      return v16 == 0 ? 0xC00000BB : 0;
  }
  return v5;
}
