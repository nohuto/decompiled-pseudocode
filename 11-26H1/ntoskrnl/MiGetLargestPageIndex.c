/*
 * XREFs of MiGetLargestPageIndex @ 0x1404CCB6C
 * Callers:
 *     MmManagePartitionCreateLargePages @ 0x14077E0A0 (MmManagePartitionCreateLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x140865468 (MiAddPhysicalMemoryChunks.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     MmBuildLargePages @ 0x140B20AD8 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
