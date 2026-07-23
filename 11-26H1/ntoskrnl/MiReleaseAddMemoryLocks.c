/*
 * XREFs of MiReleaseAddMemoryLocks @ 0x14086D0EC
 * Callers:
 *     MiReturnAddMemoryResources @ 0x1406EEE10 (MiReturnAddMemoryResources.c)
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x1406EEEAC (MiUnlockDynamicMemoryNestedExclusive.c)
 */

void __fastcall MiReleaseAddMemoryLocks(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  if ( *(_BYTE *)(a1 + 44) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
      MiUnlockDynamicMemoryNestedExclusive();
    MiUnlockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)CurrentThread);
    *(_BYTE *)(a1 + 44) = 0;
  }
}
