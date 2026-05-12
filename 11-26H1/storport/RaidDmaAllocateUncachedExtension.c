/*
 * XREFs of RaidDmaAllocateUncachedExtension @ 0x140072258
 * Callers:
 *     NVMeGetUncachedExtensionEx @ 0x1400797D4 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400799F4 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x14007DA18 (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x140188AD0 (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall RaidDmaAllocateUncachedExtension(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
  {
    LODWORD(a4) = -1;
    if ( *(_DWORD *)(a1 + 24) == 3 )
      LODWORD(a4) = -1;
  }
  return StorAllocateContiguousMemory(a1, a2, a3, a4, a5, a6, a7, a8);
}
