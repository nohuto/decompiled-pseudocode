/*
 * XREFs of IsDmarEnabled @ 0x14001CD00
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     StorPortGetPhysicalAddress @ 0x14001B6C0 (StorPortGetPhysicalAddress.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaFreeRaidResources @ 0x14001CE40 (RaFreeRaidResources.c)
 *     NvmeFreeContiguousMemorySpecifyCacheEx @ 0x14001EB54 (NvmeFreeContiguousMemorySpecifyCacheEx.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140025578 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x140045134 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     NVMeAllocateContiguousIoResources @ 0x14008F140 (NVMeAllocateContiguousIoResources.c)
 *     NVMeFreeContiguousIoResources @ 0x14008F268 (NVMeFreeContiguousIoResources.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x14008F590 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     NvmeFreeContiguousMemory @ 0x14008FBD8 (NvmeFreeContiguousMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDmarEnabled(__int64 a1)
{
  if ( *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 904) && *(_DWORD *)(a1 + 924) == 3;
  return *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1168) && *(_DWORD *)(a1 + 1188) == 3;
}
