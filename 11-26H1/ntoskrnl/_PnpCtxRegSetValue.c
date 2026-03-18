/*
 * XREFs of _PnpCtxRegSetValue @ 0x14090AB14
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077B9CC (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14077DEE4 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140897348 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14089C21C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14089C560 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x14090A2C0 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AB012C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2B2B0 (_CmAddPanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140B44E74 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B7F3A8 (DrvDbSetDriverPackageMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x14090AB48 (_RegRtlSetValue.c)
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
