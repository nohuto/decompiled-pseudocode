/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x140957518
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14079E448 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1407A6F3C (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407ACF18 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1407B2190 (PnprGetPluginDriverImagePath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089CA4C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14089CE38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14089DF7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14089E1D4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14089F5AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408A0344 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1408A0E88 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408A1268 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408A1878 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1408A261C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtDisableLastKnownGood @ 0x1408ACF10 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A3E640 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A3FBE4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140A42A2C (_PnpCtxOpenContextBaseKey.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140B6C880 (PipHardwareConfigOpenKey.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PnpOpenCCSPnpRegKey @ 0x140CCA7CC (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CCD550 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CCD5FC (PipProcessPendingServices.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  int v7; // ecx

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 <= 10 )
    {
      switch ( a2 )
      {
        case 10:
          goto LABEL_8;
        case 4:
          goto LABEL_6;
        case 5:
          goto LABEL_8;
        case 6:
          goto LABEL_6;
        case 7:
          goto LABEL_6;
      }
      v7 = a2 - 8;
      if ( a2 == 8 )
        goto LABEL_6;
    }
    else
    {
      if ( a2 == 11 )
        goto LABEL_8;
      if ( a2 == 12 || a2 == 13 )
        goto LABEL_6;
      v7 = a2 - 14;
      if ( a2 == 14 )
        goto LABEL_8;
    }
    if ( v7 == 1 )
    {
LABEL_8:
      v6 = *(_QWORD *)(a1 + 56);
      v4 = v6 - 16;
      if ( v6 != a1 + 56 )
        goto LABEL_7;
    }
LABEL_6:
    v4 = *(_QWORD *)(a1 + 88);
LABEL_7:
    *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
