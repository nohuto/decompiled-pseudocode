/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90
 * Callers:
 *     GreWindowLayoutComplete @ 0x140023DA8 (GreWindowLayoutComplete.c)
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     GreOnCURSINFODestroy @ 0x14007A94C (GreOnCURSINFODestroy.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007BD64 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x14009009C (GreDwmNotifySpriteMonitorChange.c)
 *     vCleanupUMWindowlessSprite @ 0x140094D90 (vCleanupUMWindowlessSprite.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015EFA0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401C80D0 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1401D46C0 (GreIsWindowResizeInProgress.c)
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E9744 (GreWindowBeginLayoutUpdate.c)
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreEnableWindowResizeOptimization @ 0x1401F8A0C (GreEnableWindowResizeOptimization.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
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
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"GreLock", a2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  v9 = (_QWORD *)(v7 & -(__int64)(v8 != 0));
  if ( v9 )
  {
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xA))-- == 1 )
      *v9 &= ~4uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
