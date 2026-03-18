/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140A4E614
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14072B4B0 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x14080C710 (_CmAddPanelDeviceWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 * Callees:
 *     _SysCtxRegCreateKey @ 0x140A4E66C (_SysCtxRegCreateKey.c)
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
