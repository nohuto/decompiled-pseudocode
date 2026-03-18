/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1408C9B94
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140690E10 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14070DE50 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PnpCheckDriverDependencies @ 0x140716E44 (PnpCheckDriverDependencies.c)
 *     PnpRegCopyKeySecurity @ 0x14071752C (PnpRegCopyKeySecurity.c)
 *     PnpRegCopyKeySecurityTree @ 0x14071765C (PnpRegCopyKeySecurityTree.c)
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 *     PiDevCfgCopyVariableData @ 0x14071D438 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14071E398 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14072B4B0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x14072B8FC (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14072CEC4 (PiDrvDbResolveNodeFilePaths.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x1408076F4 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140809E68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14080A24C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14080A860 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmClassSubkeyCallback @ 0x14080B010 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14080B120 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14080B630 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14080BD80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14080D190 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmRemovePanelDeviceWorker @ 0x14080DC50 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14080DF84 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408116CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140814430 (DrvDbInitializeDatabaseNodeVersion.c)
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140931608 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140957BB0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14095B2D0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14095DB7C (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409A0318 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PnpGetServiceStartType @ 0x1409ADE64 (PnpGetServiceStartType.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A592A0 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A67ECC (PiDevCfgClearDeviceMigrationNode.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7DF78 (_CmOpenDevicePanelRegKeyWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABAFFC (PipHardwareConfigOpenKey.c)
 *     PipHardwareConfigExists @ 0x140C0F864 (PipHardwareConfigExists.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C10AE0 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C10E10 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C14C50 (PipProcessPendingObjects.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C14EB4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C14F5C (PipProcessPendingServices.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  v6 = 0LL;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 8);
  }
  return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, v6);
}
