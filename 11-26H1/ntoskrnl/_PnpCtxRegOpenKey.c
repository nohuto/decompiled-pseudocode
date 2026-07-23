/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1409582F0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14071E5F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079E370 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpCheckDriverDependencies @ 0x1407A6F3C (PnpCheckDriverDependencies.c)
 *     PnpRegCopyKeySecurity @ 0x1407A7418 (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407A7548 (PnpRegCopyKeySecurityTree.c)
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDevCfgCopyVariableData @ 0x1407AC3FC (PiDevCfgCopyVariableData.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x1407B936C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407BA93C (PiDrvDbResolveNodeFilePaths.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x14089C288 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14089DB98 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14089DF7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmClassSubkeyCallback @ 0x14089EB50 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14089F170 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408A1268 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x1408A15BC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x1408A62B4 (DrvDbInitializeDatabaseNodeVersion.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 *     PnpGetServiceStartType @ 0x1409717BC (PnpGetServiceStartType.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A3E640 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140A42A2C (_PnpCtxOpenContextBaseKey.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A4661C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5F94 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140B6C880 (PipHardwareConfigOpenKey.c)
 *     PipHardwareConfigExists @ 0x140CC7B74 (PipHardwareConfigExists.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140CC8E20 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140CC9164 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140CCD2F0 (PipProcessPendingObjects.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CCD550 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CCD5FC (PipProcessPendingServices.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
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
