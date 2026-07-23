/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x140580330
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1405869C8 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140CB47C8 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall HalpMmAllocatePerProcessorMemory(int a1)
{
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  void *v3; // rbx

  v1 = HalQueryMaximumProcessorCount() * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v1, 1u);
  v3 = MemoryInternal;
  if ( MemoryInternal )
    memset_0(MemoryInternal, 0, v1);
  return v3;
}
