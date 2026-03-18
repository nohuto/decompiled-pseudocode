/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x14090B324
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077B9CC (DrvDbSetRegValueMappedProperty.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079B830 (PipHardwareConfigClearStartOverrideCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140897348 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14089B35C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14089B478 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14089B4DC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14089B688 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x14090A2C0 (_CmSetDeviceRegPropWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14090ABAC (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AAFFE0 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF37A4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B41B2C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
