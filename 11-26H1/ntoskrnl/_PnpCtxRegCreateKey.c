/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140AED690
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2D330 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 * Callees:
 *     _SysCtxRegCreateKey @ 0x140AED6E8 (_SysCtxRegCreateKey.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rax

  v6 = a1;
  LODWORD(a1) = 0;
  if ( v6 )
    a1 = *(_QWORD *)(v6 + 224);
  return SysCtxRegCreateKey(a1, a2, a3, a4, a5, a6);
}
