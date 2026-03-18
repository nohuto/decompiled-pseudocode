/*
 * XREFs of _PnpCtxRegOpenKey @ 0x140997890
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140719960 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079B830 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpCheckDriverDependencies @ 0x1407A43FC (PnpCheckDriverDependencies.c)
 *     PnpRegCopyKeySecurity @ 0x1407A48D8 (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407A4A08 (PnpRegCopyKeySecurityTree.c)
 *     PiPnpRtlInit @ 0x1407A7364 (PiPnpRtlInit.c)
 *     PiDevCfgCopyVariableData @ 0x1407A97DC (PiDevCfgCopyVariableData.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407A9D18 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B5EC0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x1407B630C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407B78DC (PiDrvDbResolveNodeFilePaths.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140895E88 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140897798 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140897B7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmClassSubkeyCallback @ 0x140898750 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140898D70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1408994C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14089A3A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14089B1BC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14089FEB4 (DrvDbInitializeDatabaseNodeVersion.c)
 *     PnpGetServiceStartType @ 0x140916D50 (PnpGetServiceStartType.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14091DE9C (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140988300 (_PnpCtxOpenContextBaseKey.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140A8B16C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF37A4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140B26E5C (_CmOpenDevicePanelRegKeyWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B29ACC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140B698F0 (PipHardwareConfigOpenKey.c)
 *     PipHardwareConfigExists @ 0x140CC1AA4 (PipHardwareConfigExists.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140CC2D50 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140CC3094 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140CC7200 (PipProcessPendingObjects.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CC7460 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CC750C (PipProcessPendingServices.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a1 && (v6 = *(_QWORD *)(a1 + 224)) != 0 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0LL;
  return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, v7);
}
