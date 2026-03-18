/*
 * XREFs of MiClearPartitionPageBitMap @ 0x140708808
 * Callers:
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockDynamicMemoryExclusive @ 0x1405278F0 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052A718 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x140707C4C (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x140708B00 (MiDeletePartitionPageNodes.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x14087C5D4 (MiMakePartitionMemoryBlock.c)
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
    MiActOnPartitionNodePages(v11, 9u, 0, (__int64)v16);
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
