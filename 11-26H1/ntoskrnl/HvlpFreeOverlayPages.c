/*
 * XREFs of HvlpFreeOverlayPages @ 0x140344280
 * Callers:
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
