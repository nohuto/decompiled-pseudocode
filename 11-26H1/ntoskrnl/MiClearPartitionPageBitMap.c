/*
 * XREFs of MiClearPartitionPageBitMap @ 0x14070D4BC
 * Callers:
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x14070D7B4 (MiDeletePartitionPageNodes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *i; // rax
  KIRQL v9; // bp
  _QWORD **v10; // rcx
  __int64 v11; // r10
  _QWORD *v12; // rdx
  _QWORD *j; // rcx
  volatile LONG *v14; // rcx
  _QWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[6]; // [rsp+40h] [rbp-38h] BYREF

  memset_0(v16, 0, 0x48uLL);
  v16[0] = a1;
  v6 = 0LL;
  v17[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  for ( i = *a2; i; i = (_QWORD *)*i )
    v6 = i;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, v4, v5);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  while ( v6 )
  {
    v10 = (_QWORD **)v6[1];
    v11 = (__int64)v6;
    v12 = v6;
    if ( v10 )
    {
      v6 = (_QWORD *)v6[1];
      for ( j = *v10; j; j = (_QWORD *)*j )
        v6 = j;
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v12 )
          break;
        v12 = v6;
      }
    }
    MiActOnPartitionNodePages(v11, 9u, 0, v16);
  }
  v14 = (volatile LONG *)(a1 + 272);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, v9);
  if ( (ULONG *)a1 != &MiSystemPartition )
    MiMakePartitionMemoryBlock(a1);
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return MiDeletePartitionPageNodes(v17);
}
