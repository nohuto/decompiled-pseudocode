/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x14088F19C
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408080D8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408085FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14080993C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14080A860 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14080CD34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14080DC50 (_CmRemovePanelDeviceWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408116CC (DrvDbDeleteObjectSubKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PiDqDeleteUserObject @ 0x14088EFF8 (PiDqDeleteUserObject.c)
 *     PipHardwareConfigActivateService @ 0x14088F0D0 (PipHardwareConfigActivateService.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1408905EC (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     PiDevCfgFreeVariable @ 0x14095FBC4 (PiDevCfgFreeVariable.c)
 *     PiDevCfgInitResolveContext @ 0x14095FC2C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14095FDA0 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     PipMigrateCleanService @ 0x140C102F4 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140951400 (_RegRtlDeleteTreeInternal.c)
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
