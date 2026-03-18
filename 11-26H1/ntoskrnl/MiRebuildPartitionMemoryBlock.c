/*
 * XREFs of MiRebuildPartitionMemoryBlock @ 0x1407095C0
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x1408663A4 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x1405278F0 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052A718 (MiUnlockDynamicMemoryExclusive.c)
 *     MiMakePartitionMemoryBlock @ 0x14087C5D4 (MiMakePartitionMemoryBlock.c)
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
