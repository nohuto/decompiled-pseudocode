/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     DispatchNotificationWorker @ 0x14001D950 (DispatchNotificationWorker.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1400262F0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     AcpiDeviceResetDereference @ 0x14004D820 (AcpiDeviceResetDereference.c)
 *     ACPIDockIntfDereference @ 0x140056C00 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x140056DB0 (ACPIDockIrpRemoveDevice.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x140063B70 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x140068DC0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1400A8F10 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400B4070 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
