/*
 * XREFs of MmFreePagesFromMdl @ 0x1403454A0
 * Callers:
 *     sub_140551760 @ 0x140551760 (sub_140551760.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079CB90 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpFreePfnArray @ 0x140825DC0 (EtwpFreePfnArray.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B30E5C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140B30EDC (HalpDmaAllocateScatterMemory.c)
 *     MmAllocateNonCachedMemory @ 0x140B37D20 (MmAllocateNonCachedMemory.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B62D30 (HalpDmaGrowContiguousMapBuffers.c)
 *     MmFreeNonCachedMemory @ 0x140B685F0 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
