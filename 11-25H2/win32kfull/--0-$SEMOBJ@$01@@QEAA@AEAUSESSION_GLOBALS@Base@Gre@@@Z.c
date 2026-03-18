/*
 * XREFs of ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x14026B88C (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026C690 (bDrvShadowDisconnect.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FD954 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x14032258C (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x140322A3C (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140322B00 (GreConfirmWindowResizeCommit.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140329D94 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 *     GreDisableMirrorRendering @ 0x14032FD58 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x14032FE7C (GreEnableMirrorRendering.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 *     GreDrvReconnect @ 0x14033F2B8 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033F76C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033F9A0 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033FBC0 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033FE20 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
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
