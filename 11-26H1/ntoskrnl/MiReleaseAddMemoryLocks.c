/*
 * XREFs of MiReleaseAddMemoryLocks @ 0x140866D0C
 * Callers:
 *     MiReturnAddMemoryResources @ 0x1406EA170 (MiReturnAddMemoryResources.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14052A718 (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x1406EA20C (MiUnlockDynamicMemoryNestedExclusive.c)
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
