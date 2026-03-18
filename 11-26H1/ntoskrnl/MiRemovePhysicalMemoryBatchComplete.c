/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x1406EA148
 * Callers:
 *     MiRemoveMdlPages @ 0x1408681C4 (MiRemoveMdlPages.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14024FCE0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14024FD8C (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  MiFlushEntireTbDueToAttributeChange();
  ++dword_140E2D72C;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges(v1, v0, v2);
}
