/*
 * XREFs of ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     ??0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z @ 0x14009FA00 (--0ENTER_GRE_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@AEAVPDEVOBJ@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreDesktopSwitch @ 0x140230AF8 (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140312EA8 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 *     GreSaveScreenBits @ 0x140325FC8 (GreSaveScreenBits.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344860 (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x140344C40 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140344D00 (GreConfirmWindowResizeCommit.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<2>::SEMOBJ<2>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 1144LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<2>();
  return a1;
}
