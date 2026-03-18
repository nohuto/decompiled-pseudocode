/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140AEABA0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B5EC0 (PiDrvDbOverlayNodeHive.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2B2B0 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 * Callees:
 *     _SysCtxRegCreateKey @ 0x140AEABF8 (_SysCtxRegCreateKey.c)
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
