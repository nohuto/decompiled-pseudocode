/*
 * XREFs of NvmeAdapterAllocateContiguousIoResources @ 0x1400D30CC
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterAllocateControllerQueueResources @ 0x1400E47BC (NvmeAdapterAllocateControllerQueueResources.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterAllocateContiguousIoResources(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmAllocateContiguousNodeMemory(a2, 0x100000000LL, -1LL, 0LL, 4, 0x80000000);
  if ( result )
  {
    *(_QWORD *)(result + 840) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_DWORD *)(result + 16) = a2;
  }
  return result;
}
