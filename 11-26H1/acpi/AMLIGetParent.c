/*
 * XREFs of AMLIGetParent @ 0x14001E8A8
 * Callers:
 *     CmosConfigSpaceHandler @ 0x14001BEA0 (CmosConfigSpaceHandler.c)
 *     InternalRawAccessOpRegionHandler @ 0x14001CFF0 (InternalRawAccessOpRegionHandler.c)
 *     OSNotifyCreateDevice @ 0x14001E2EC (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x14001E71C (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x14002D7E0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031890 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     ACPIRootIrpQueryPower @ 0x1400454E0 (ACPIRootIrpQueryPower.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     GetOpRegionScope @ 0x140047E1C (GetOpRegionScope.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     OSNotifyCreateProcessor @ 0x140063C6C (OSNotifyCreateProcessor.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     AMLIGetParentNoLock @ 0x14001E8F4 (AMLIGetParentNoLock.c)
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  KIRQL v4; // dl

  LOBYTE(v2) = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = AMLIGetParentNoLock(a1, v2);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v3;
}
