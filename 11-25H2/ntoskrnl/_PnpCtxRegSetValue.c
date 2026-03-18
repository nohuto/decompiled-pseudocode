/*
 * XREFs of _PnpCtxRegSetValue @ 0x140950248
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408093D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14080C710 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080F71C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14080F8C4 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14080FE28 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140813664 (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140891064 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14094F0B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140951084 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A92D00 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x14095027C (_RegRtlSetValue.c)
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
