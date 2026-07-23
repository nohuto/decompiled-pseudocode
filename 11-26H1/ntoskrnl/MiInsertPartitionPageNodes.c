/*
 * XREFs of MiInsertPartitionPageNodes @ 0x14070DBDC
 * Callers:
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionNodePages @ 0x14070D8F4 (MiFreePartitionNodePages.c)
 *     MiMergePageNodes @ 0x14070DDA8 (MiMergePageNodes.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPageNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 BugCheckParameter4; // r13
  char v10; // bl
  bool v11; // si
  struct _KTHREAD *CurrentThread; // rdx
  char v13; // r12
  int v14; // edi
  BOOL v15; // eax
  int v16; // eax
  unsigned int v17; // r8d
  __int64 BugCheckParameter3; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h]
  __int64 BugCheckParameter2a; // [rsp+98h] [rbp+20h]

  BugCheckParameter3 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v7 = RtlNumberOfSetBitsEx((__int64 *)(a3 + 32));
  v8 = *(unsigned int *)(a2 + 24);
  BugCheckParameter4 = v7;
  v10 = 1;
  v11 = (*(_DWORD *)(a2 + 24) & 0x40) != 0 || (*(_DWORD *)(a2 + 24) & 0x200) != 0;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v21 = (__int64)CurrentThread;
  v14 = 0;
  v20 = 1;
  if ( (v8 & 0xC8) == 0 )
  {
    v15 = 0;
    if ( (*(_DWORD *)(a2 + 24) & 0x40) == 0 )
      v15 = (*(_DWORD *)(a2 + 24) & 1) == 0;
    v20 = v15;
    MiIncreaseCommitLimits(a1, BugCheckParameter4, BugCheckParameter4, BugCheckParameter4, v15, 0LL);
    CurrentThread = (struct _KTHREAD *)v21;
  }
  v16 = *(_DWORD *)(a2 + 24);
  if ( (v16 & 0x10) != 0 )
  {
    a4 = 0LL;
    v13 = 1;
  }
  else if ( (v16 & 8) == 0 )
  {
    MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, v8, 0LL);
    MiUpdatePhysicalPages(a1, BugCheckParameter4, 1LL);
  }
  if ( !v11 )
  {
    v17 = *(_DWORD *)(a2 + 24) | 0x400;
    if ( v20 )
      v17 = *(_DWORD *)(a2 + 24);
    v14 = MiFreePartitionNodePages(a1, a3, v17);
  }
  if ( (*(_DWORD *)(a2 + 24) & 8) == 0 )
  {
    v10 = MiMergePageNodes(a1, a3, a4, 0LL);
    MiMakePartitionMemoryBlock(a1);
    MiUnlockDynamicMemoryExclusive(a1, v21);
  }
  if ( v14 < 0 && !v13 )
  {
    BugCheckParameter2a = (__int64)v14 << 32;
    LODWORD(BugCheckParameter2a) = *(_DWORD *)(a2 + 24);
    KeBugCheckEx(0x1Au, 0x41007uLL, BugCheckParameter2a, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v10 )
    MiDeletePartitionPageNode((PVOID *)a3);
  return (unsigned int)v14;
}
