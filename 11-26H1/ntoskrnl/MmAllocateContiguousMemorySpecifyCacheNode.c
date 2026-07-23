/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x14034B9A0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCache @ 0x14034B970 (MmAllocateContiguousMemorySpecifyCache.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper @ 0x140669000 (DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper.c)
 *     DifMmAllocateContiguousMemorySpecifyCacheWrapper @ 0x1406691B0 (DifMmAllocateContiguousMemorySpecifyCacheWrapper.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCacheNode(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  int v6; // r10d

  if ( CacheType == MmCached )
  {
    v6 = 64;
  }
  else
  {
    v6 = 516;
    if ( CacheType == MmWriteCombined )
      v6 = 1028;
  }
  return (PVOID)MmAllocateContiguousNodeMemory(
                  NumberOfBytes,
                  LowestAcceptableAddress.LowPart,
                  HighestAcceptableAddress.LowPart,
                  BoundaryAddressMultiple.LowPart,
                  v6,
                  PreferredNode);
}
