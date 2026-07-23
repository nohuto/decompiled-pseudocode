/*
 * XREFs of MmFreePagesFromMdl @ 0x140347520
 * Callers:
 *     sub_140553BE0 @ 0x140553BE0 (sub_140553BE0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 *     EtwpFreePfnArray @ 0x14082C000 (EtwpFreePfnArray.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B3305C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140B330DC (HalpDmaAllocateScatterMemory.c)
 *     MmAllocateNonCachedMemory @ 0x140B39F30 (MmAllocateNonCachedMemory.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B65DD0 (HalpDmaGrowContiguousMapBuffers.c)
 *     MmFreeNonCachedMemory @ 0x140B6B580 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
