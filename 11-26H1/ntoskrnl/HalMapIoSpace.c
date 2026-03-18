/*
 * XREFs of HalMapIoSpace @ 0x14059A1C0
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x14047BD64 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpMcStagePayload @ 0x1405938EC (HalpMcStagePayload.c)
 *     HalpHvTimerInitialize @ 0x140597300 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140597C14 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpPmTimerInitialize @ 0x140598690 (HalpPmTimerInitialize.c)
 *     HalpHpetDiscover @ 0x140598928 (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x140598D90 (HalpHpetInitialize.c)
 *     HalpApicInitializeIoUnit @ 0x1405A1690 (HalpApicInitializeIoUnit.c)
 *     HalpApicInitializeLocalUnit @ 0x1405A18A0 (HalpApicInitializeLocalUnit.c)
 *     WdHwCreateHardwareRegister @ 0x1405A4E34 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1405A6C50 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140BEFC90 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF0A38 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140BF0BE0 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140CB3674 (HalpAcpiSetupPmRegister.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
 * Callees:
 *     HalpMap @ 0x1403439AC (HalpMap.c)
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
