/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x14057DCF0
 * Callers:
 *     HalSocRequestApi @ 0x1404EF27C (HalSocRequestApi.c)
 *     HalpIommuAddDebuggerException @ 0x14050C67C (HalpIommuAddDebuggerException.c)
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpMmAllocateMemory @ 0x14057DCD4 (HalpMmAllocateMemory.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14057DE10 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptInitializeIpis @ 0x14057F394 (HalpInterruptInitializeIpis.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1405872E0 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x14058CDC8 (HalpRegisterDmaController.c)
 *     HalpIommuProcessReservationsInternal @ 0x14058E128 (HalpIommuProcessReservationsInternal.c)
 *     HalpInterruptParseMadt @ 0x140590738 (HalpInterruptParseMadt.c)
 *     EmonAllocateCounters @ 0x140594E60 (EmonAllocateCounters.c)
 *     ExtEnvAllocateMemory @ 0x140597BA0 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x140597FD0 (HalRegisterPermanentAddressUsage.c)
 *     HalpTimerRegister @ 0x14059816C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x14059AC04 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x14059B0C4 (HalpInterruptRegisterLine.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A089C (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140CADD98 (HalpInitializeInterrupts.c)
 *     HalpExtInitExtensions @ 0x140CAF098 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140CB0DF0 (ExtEnvRegisterIommu.c)
 *     HalpAllocateNumaConfigData @ 0x140CB1210 (HalpAllocateNumaConfigData.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB1974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB19FC (HalpNumaInitializeStaticConfiguration.c)
 *     HalpBlkAllocateShadowData @ 0x140CB2EDC (HalpBlkAllocateShadowData.c)
 *     HalpPowerInitNvsRegionData @ 0x140CB335C (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 *     HalpCopyDebugDescriptor @ 0x140CB47D4 (HalpCopyDebugDescriptor.c)
 * Callees:
 *     HalpMap @ 0x1403439AC (HalpMap.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D08980 (HalpAllocPhysicalMemoryEx.c)
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
