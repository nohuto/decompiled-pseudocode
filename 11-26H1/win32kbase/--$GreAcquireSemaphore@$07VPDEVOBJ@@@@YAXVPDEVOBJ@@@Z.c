/*
 * XREFs of ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B480 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C640C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400C64A0 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvNotifyModeChangeStartStop @ 0x140188CE8 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreAcquireSemaphore<8,PDEVOBJ>(__int64 a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx

  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 48), 0, (__int64)L"DevLock");
  GreAcquireSemaphoreInternal(v3);
  return GrepAcquireLockValidate<8>();
}
