/*
 * XREFs of HalpMmAllocatePerProcessorMemory @ 0x14057DE10
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1405844A8 (HalpTimerInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140CAE788 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404FB520 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
