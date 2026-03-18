/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x1405C7CF8
 * Callers:
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EA148 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiAddPhysicalMemoryChunks @ 0x140865468 (MiAddPhysicalMemoryChunks.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x14087BE70 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     IopConstructInMemoryDumpHeader @ 0x1405C8AA8 (IopConstructInMemoryDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x1405C98AC (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoUpdateDumpPhysicalRanges(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdx
  __int64 PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry )
  {
    LOBYTE(a2) = 1;
    if ( CrashdmpInitialized == 1 )
    {
      if ( ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
      {
        PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
        if ( PhysicalMemoryBlock )
          guard_dispatch_icall_no_overrides(PhysicalMemoryBlock, v4);
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
    }
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3);
}
