/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140A2D8F8
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089664C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1409880EC (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgFreeVariable @ 0x140988298 (PiDevCfgFreeVariable.c)
 *     PiDevCfgInitResolveContext @ 0x140988D74 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A2CCFC (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     PipHardwareConfigActivateService @ 0x140A2D208 (PipHardwareConfigActivateService.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     PiDqDeleteUserObject @ 0x140A2D7E4 (PiDqDeleteUserObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     PipMigrateCleanService @ 0x140CC2540 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140A2DB2C (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0LL);
}
