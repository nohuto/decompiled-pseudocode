/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x140996AB8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14079B908 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1407A43FC (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407AA2A8 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1407AF130 (PnprGetPluginDriverImagePath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089664C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140897B7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmGetMatchingDeviceContainerList @ 0x140897DD4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1408991AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1408994C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14089AA88 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14089B478 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14089C21C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtDisableLastKnownGood @ 0x1408A6AA0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     DrvDbLoadDatabaseNode @ 0x14091DE9C (DrvDbLoadDatabaseNode.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140988300 (_PnpCtxOpenContextBaseKey.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A2CCFC (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140A8B16C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140B26E5C (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B393C0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140B698F0 (PipHardwareConfigOpenKey.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     PnpOpenCCSPnpRegKey @ 0x140CC46EC (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CC7460 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CC750C (PipProcessPendingServices.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140997720 (_PnpCtxGetCachedNodeBaseKey.c)
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
