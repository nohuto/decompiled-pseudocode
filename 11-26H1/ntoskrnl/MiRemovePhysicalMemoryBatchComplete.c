/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x1406EEDE8
 * Callers:
 *     MiRemoveMdlPages @ 0x14086E5A4 (MiRemoveMdlPages.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140E2D8AC;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
