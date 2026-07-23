/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x140580210
 * Callers:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpIommuAddDebuggerException @ 0x1405060EC (HalpIommuAddDebuggerException.c)
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140580330 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptInitializeIpis @ 0x1405818B4 (HalpInterruptInitializeIpis.c)
 *     HalpExtRegisterResourceDescriptor @ 0x140589800 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x14058F548 (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x1405908A8 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptParseMadt @ 0x140592EB8 (HalpInterruptParseMadt.c)
 *     EmonAllocateCounters @ 0x1405975E0 (EmonAllocateCounters.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14059A750 (HalRegisterPermanentAddressUsage.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 *     HalpExtInitExtensions @ 0x140CB50D8 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140CB6E30 (ExtEnvRegisterIommu.c)
 *     HalpAllocateNumaConfigData @ 0x140CB7250 (HalpAllocateNumaConfigData.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB79B4 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 *     HalpBlkAllocateShadowData @ 0x140CB8F1C (HalpBlkAllocateShadowData.c)
 *     HalpPowerInitNvsRegionData @ 0x140CB939C (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 *     HalpCopyDebugDescriptor @ 0x140CBA814 (HalpCopyDebugDescriptor.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpMmAllocateMemoryInternal(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  if ( !HalpMmLoaderBlock || KeGetPcr()->Prcb.Number )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( HalpMmLeftoverMemorySize >= v3 )
  {
    result = HalpMmLeftoverMemory;
    HalpMmLeftoverMemory += v3;
    HalpMmLeftoverMemorySize -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, 0, v5, 0, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = HalpMap(v6, v5, a2 == 1, 0, 4u, 0LL);
  if ( v7 )
  {
    HalpMmLeftoverMemory = v7 + v3;
    HalpMmLeftoverMemorySize = (v5 << 12) - v3;
  }
  return v7;
}
