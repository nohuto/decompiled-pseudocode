/*
 * XREFs of HalpAllocPhysicalMemoryEx @ 0x140D08980
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x14047BD64 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAcpiAllocateMemory @ 0x14052554C (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x14057DAD0 (HalpAllocateEarlyPages.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14057DC44 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140597C14 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x140599740 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140C80038 (HalpAllocPhysicalMemory.c)
 *     HalpDmaInitMemory @ 0x140CB0980 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140CB2C6C (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140CB2D68 (HalpBlkAllocatePageTablePage.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpMap @ 0x1403439AC (HalpMap.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140D08A70 (HalpAllocPhysicalMemoryInternal.c)
 */

__int64 __fastcall HalpAllocPhysicalMemoryEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v9; // rax
  void *v10; // rax
  void *v11; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - LODWORD(HalpPmuArbiter.WaitBlockList)) <= 4
    && !HalpDescriptorPoolLow )
  {
    HalpDescriptorPoolLow = 1;
    v9 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL, 0LL);
    if ( v9 )
    {
      v10 = (void *)HalpMap(v9, 1LL, 1u, 0, 4u, a5);
      v11 = v10;
      if ( v10 )
      {
        memset_0(v10, 0, 0x1000uLL);
        HalpAllocationDescriptorArray = v11;
        HalpAllocationDescriptorArraySize = 85;
        LODWORD(HalpPmuArbiter.WaitBlockList) = 0;
        HalpDescriptorPoolLow = 0;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3, a4);
}
