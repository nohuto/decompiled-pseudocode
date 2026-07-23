/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x1409AD448
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077E60C (DrvDbSetRegValueMappedProperty.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079E370 (PipHardwareConfigClearStartOverrideCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408A1268 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408A175C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408A1878 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408A18DC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408A1A88 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1409AD164 (_PnpDeletePropertyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A4661C (PiDevCfgClearDeviceMigrationNode.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADC30 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5F94 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1FA04 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B43A1C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
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
