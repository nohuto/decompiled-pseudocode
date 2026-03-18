/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140867420
 * Callers:
 *     IoFillDumpHeader @ 0x1405C6688 (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x1405C98AC (IopGetPhysicalMemoryBlock.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4D600 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
