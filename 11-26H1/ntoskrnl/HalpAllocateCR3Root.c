/*
 * XREFs of HalpAllocateCR3Root @ 0x1405966E4
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140BF2874 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HalpAllocateCR3Root()
{
  void *ContiguousNodeMemory; // rax

  if ( !HalpCR3Root )
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
    if ( !ContiguousNodeMemory )
      return 3221225626LL;
    HalpCR3Root = ContiguousNodeMemory;
  }
  return 0LL;
}
