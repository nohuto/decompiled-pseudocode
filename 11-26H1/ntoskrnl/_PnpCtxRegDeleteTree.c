/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140A3F304
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089CA4C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14089CE38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408A0344 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408A1268 (_CmRemovePanelDeviceWorker.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 *     PiDqDeleteUserObject @ 0x140A3F1F0 (PiDqDeleteUserObject.c)
 *     PipHardwareConfigActivateService @ 0x140A3F950 (PipHardwareConfigActivateService.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A3FBE4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140A42818 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgFreeVariable @ 0x140A429C4 (PiDevCfgFreeVariable.c)
 *     PiDevCfgInitResolveContext @ 0x140A434A0 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AE8284 (PpDevCfgProcessDeviceOperations.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1FA04 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     PipMigrateCleanService @ 0x140CC8610 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140A3F538 (_RegRtlDeleteTreeInternal.c)
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
