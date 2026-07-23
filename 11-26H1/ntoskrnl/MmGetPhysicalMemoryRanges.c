/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x14086D800
 * Callers:
 *     IoFillDumpHeader @ 0x1405C8F58 (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x1405CC17C (IopGetPhysicalMemoryBlock.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
