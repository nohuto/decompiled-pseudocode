/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148
 * Callers:
 *     GreWindowLayoutComplete @ 0x140023DA8 (GreWindowLayoutComplete.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1400579A0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140057C3C (GreNotifyDirtySprite.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015EFA0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140173B30 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreSfmOpenCompositorRef @ 0x1401A664C (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1401A675C (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1401A6988 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401C80D0 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401D2F9C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1401D46C0 (GreIsWindowResizeInProgress.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E9744 (GreWindowBeginLayoutUpdate.c)
 *     GreEnableWindowResizeOptimization @ 0x1401F8A0C (GreEnableWindowResizeOptimization.c)
 *     GreSfmDwmStartup @ 0x14021C78C (GreSfmDwmStartup.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x140322A3C (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140322B00 (GreConfirmWindowResizeCommit.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x140322D10 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreGetHwndUpdateIds @ 0x140322ED8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 *     GreSetHwndPresentFlags @ 0x1403232F8 (GreSetHwndPresentFlags.c)
 *     GreSfmGenerateMoveData @ 0x14033312C (GreSfmGenerateMoveData.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"DwmState", a2);
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
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xF))-- == 1 )
      *v9 &= ~0x80uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
