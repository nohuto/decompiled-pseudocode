/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x140A2D8BC
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089664C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A2CCFC (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     PiDqDeleteUserObject @ 0x140A2D7E4 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2B2B0 (_CmAddPanelDeviceWorker.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteKeyTransacted @ 0x140A2DD6C (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, __int64 a2, __int64 a3)
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
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
