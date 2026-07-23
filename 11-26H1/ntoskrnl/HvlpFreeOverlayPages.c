/*
 * XREFs of HvlpFreeOverlayPages @ 0x140346300
 * Callers:
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
