/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14070E56C
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x14086F5B8 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x1406EE3AC (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x1406EEEE8 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406F2314 (MiReleasePartitionHugeIoSpace.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x14070DDA8 (MiMergePageNodes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiReturnPartitionPagesToParent(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG *v3; // rbp
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  PVOID *v9; // rax
  PVOID *v10; // rbx
  PVOID **v11; // rcx
  PVOID *v12; // rsi
  PVOID *v13; // rax
  PVOID *i; // rcx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(v15, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = **(ULONG ***)(*(_QWORD *)(BugCheckParameter2 + 256) + 72LL);
  MiDrainZeroLookasides(BugCheckParameter2, 0LL, 0LL, 0);
  v15[0] = v3;
  v15[1] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive(BugCheckParameter2, (__int64)CurrentThread, v4, v5);
  MiLockDynamicMemoryNestedParentExclusive(BugCheckParameter2, v6, v7, v8);
  v9 = *(PVOID **)(BugCheckParameter2 + 24);
  v10 = 0LL;
  while ( v9 )
  {
    v10 = v9;
    v9 = (PVOID *)*v9;
  }
  while ( v10 )
  {
    v11 = (PVOID **)v10[1];
    v12 = v10;
    v13 = v10;
    if ( v11 )
    {
      v10 = (PVOID *)v10[1];
      for ( i = *v11; i; i = (PVOID *)*i )
        v10 = i;
    }
    else
    {
      while ( 1 )
      {
        v10 = (PVOID *)((unsigned __int64)v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || *v10 == v13 )
          break;
        v13 = v10;
      }
    }
    MiActOnPartitionNodePages((__int64)v12, 6u, 0, v15);
    RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter2 + 24), (__int64)v12);
    if ( v3 == &MiSystemPartition || (unsigned int)MiMergePageNodes((__int64)v3, (__int64)v12, 0LL, 0LL) )
      MiDeletePartitionPageNode(v12);
  }
  MiMakePartitionMemoryBlock(v3);
  MiMakePartitionMemoryBlock(BugCheckParameter2);
  MiUnlockDynamicMemoryNestedParentExclusive(BugCheckParameter2);
  MiUnlockDynamicMemoryExclusive(BugCheckParameter2, (__int64)CurrentThread);
  MiReleasePartitionHugeIoSpace(BugCheckParameter2);
}
