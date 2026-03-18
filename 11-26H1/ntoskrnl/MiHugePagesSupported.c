/*
 * XREFs of MiHugePagesSupported @ 0x1404CFA24
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x1409BA6F4 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409F2C94 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
