/*
 * XREFs of MiRebuildPartitionMemoryBlock @ 0x14070E274
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x14086C784 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 */

_BOOL8 __fastcall MiRebuildPartitionMemoryBlock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  BOOL v6; // edi

  CurrentThread = KeGetCurrentThread();
  v6 = 1;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, a3, a4);
  if ( *(_QWORD *)(a1 + 22288) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
      MiMakePartitionMemoryBlock(a1);
      if ( *(_QWORD *)(a1 + 22288) )
        v6 = *(_QWORD *)(a1 + 80) != 0LL;
    }
  }
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return v6;
}
