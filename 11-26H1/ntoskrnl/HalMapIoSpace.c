/*
 * XREFs of HalMapIoSpace @ 0x14059C940
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpMcStagePayload @ 0x14059606C (HalpMcStagePayload.c)
 *     HalpHvTimerInitialize @ 0x140599A80 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpPmTimerInitialize @ 0x14059AE10 (HalpPmTimerInitialize.c)
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x14059B510 (HalpHpetInitialize.c)
 *     HalpApicInitializeIoUnit @ 0x1405A3EA0 (HalpApicInitializeIoUnit.c)
 *     HalpApicInitializeLocalUnit @ 0x1405A40B0 (HalpApicInitializeLocalUnit.c)
 *     WdHwCreateHardwareRegister @ 0x1405A7644 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1405A9460 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF6A38 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140CB96B4 (HalpAcpiSetupPmRegister.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CBA6A0 (HalpMiscInitializeAmdSfs.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  SIZE_T v4; // rdx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v4 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    CacheType = MmNonCached;
  return (PVOID)HalpMap(PhysicalAddress.QuadPart, v4, CacheType, 0, 4u, 0LL);
}
