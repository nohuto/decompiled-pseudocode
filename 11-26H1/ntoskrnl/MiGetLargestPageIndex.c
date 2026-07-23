/*
 * XREFs of MiGetLargestPageIndex @ 0x1404C630C
 * Callers:
 *     MmManagePartitionCreateLargePages @ 0x1407809E4 (MmManagePartitionCreateLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MmBuildLargePages @ 0x140B22ED8 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
