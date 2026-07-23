/*
 * XREFs of ExtEnvAllocateMemory @ 0x14059A320
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14058CEA8 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IommuMapDevice @ 0x14059ED30 (IommuMapDevice.c)
 *     IvtSetDeviceSvmCapabilities @ 0x1405AA190 (IvtSetDeviceSvmCapabilities.c)
 *     HalpHsaCreateReservedDevice @ 0x1405AA6D8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405AA884 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocatePasidTables @ 0x1405AB238 (HsaAllocatePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405ABBA0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1405ACDEC (HsaProcessIvmd.c)
 *     HsaSetDeviceSvmCapabilities @ 0x1405AD0E0 (HsaSetDeviceSvmCapabilities.c)
 *     IvmdFindDeviceEntry @ 0x1405AD8C8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1405AD970 (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x1405B1BDC (IvtAllocateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1405B1E70 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1405B2698 (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x1405B2734 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1405B2C08 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1405B2CAC (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF6A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *MemoryInternal; // rax

  v3 = 0;
  v4 = a2;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, a2);
  }
  else
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  memset_0(MemoryInternal, 0, v4);
  return v3;
}
