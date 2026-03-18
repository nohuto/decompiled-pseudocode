/*
 * XREFs of ExtEnvAllocateMemory @ 0x140597BA0
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x140509A4C (IvtAllocateScalableModePasidTables.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14058A778 (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IommuMapDevice @ 0x14059C5B0 (IommuMapDevice.c)
 *     IvtSetDeviceSvmCapabilities @ 0x1405A7980 (IvtSetDeviceSvmCapabilities.c)
 *     HalpHsaCreateReservedDevice @ 0x1405A7EC8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405A8074 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405A835C (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocatePasidTables @ 0x1405A8A28 (HsaAllocatePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405A8C60 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405A9390 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1405AA5DC (HsaProcessIvmd.c)
 *     HsaSetDeviceSvmCapabilities @ 0x1405AA8D0 (HsaSetDeviceSvmCapabilities.c)
 *     IvmdFindDeviceEntry @ 0x1405AB0B8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1405AB160 (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x1405AF3CC (IvtAllocateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1405AF660 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1405AFE88 (DmrConvertDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x1405AFF24 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1405B03F8 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1405B049C (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF0A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
