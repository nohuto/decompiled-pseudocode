/*
 * XREFs of MiHugePagesSupported @ 0x1404C9454
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
