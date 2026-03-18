/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14070DF24 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140716E44 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14071E924 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140723638 (PnprGetPluginDriverImagePath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408080D8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408085FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14080993C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14080A24C (_CmGetDevicesInBaseContainerList.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14080A4A4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14080A860 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14080BA6C (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14080BD80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14080CD34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14080D870 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14080DC50 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14080F8C4 (_CmSetInstallerClassMappedProperty.c)
 *     NtDisableLastKnownGood @ 0x14081A9C0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     DrvDbLoadDatabaseNode @ 0x140931608 (DrvDbLoadDatabaseNode.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140957BB0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14095B2D0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14095DB7C (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409A0318 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7DF78 (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8C1F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigOpenKey @ 0x140ABAFFC (PipHardwareConfigOpenKey.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PnpOpenCCSPnpRegKey @ 0x140C12368 (PnpOpenCCSPnpRegKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C14EB4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C14F5C (PipProcessPendingServices.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C9DA0 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  int v6; // ecx
  __int64 v7; // rcx

  v4 = *(_QWORD **)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 == 12 || a2 == 13 )
          goto LABEL_17;
        v6 = a2 - 14;
        if ( a2 != 14 )
          goto LABEL_15;
      }
    }
    else if ( a2 != 10 )
    {
      if ( a2 == 4 )
        goto LABEL_17;
      if ( a2 != 5 )
      {
        if ( a2 == 6 )
          goto LABEL_17;
        if ( a2 == 7 )
          goto LABEL_17;
        v6 = a2 - 8;
        if ( a2 == 8 )
          goto LABEL_17;
LABEL_15:
        if ( v6 != 1 )
          goto LABEL_17;
      }
    }
    v7 = *(_QWORD *)(a1 + 56);
    v4 = (_QWORD *)(v7 - 16);
    if ( v7 != a1 + 56 )
    {
LABEL_18:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, a2, a3);
    }
LABEL_17:
    v4 = *(_QWORD **)(a1 + 88);
    goto LABEL_18;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, a2, a3);
}
