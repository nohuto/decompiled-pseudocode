/*
 * XREFs of HalpAllocPhysicalMemoryEx @ 0x140D0EC50
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAcpiAllocateMemory @ 0x140527BBC (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x14057FFF0 (HalpAllocateEarlyPages.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x140580164 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14059BEC0 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140C86038 (HalpAllocPhysicalMemory.c)
 *     HalpDmaInitMemory @ 0x140CB69C0 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140CB8CAC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140CB8DA8 (HalpBlkAllocatePageTablePage.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140D0ED40 (HalpAllocPhysicalMemoryInternal.c)
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

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - *(_DWORD *)&HalpPmuArbiter.ApcStateFill[40]) <= 4
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
        *(_DWORD *)&HalpPmuArbiter.ApcStateFill[40] = 0;
        HalpDescriptorPoolLow = 0;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3, a4);
}
