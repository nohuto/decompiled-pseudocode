/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x14008D568 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     EngpMovePointer @ 0x14008F2A8 (EngpMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1400949E4 (GreDwmGetSurfaceData.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1400DB204 (GreRedrawSpriteOverlapPresent.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015EFA0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     EngSetPointerShape @ 0x140173990 (EngSetPointerShape.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140174944 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1401B9104 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     bDrvReconnect @ 0x14026B88C (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026C690 (bDrvShadowDisconnect.c)
 *     GreDwmGetRedirectionStyle @ 0x140322D94 (GreDwmGetRedirectionStyle.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
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

__int64 __fastcall GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"Sprite", a2);
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
    if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xE))-- == 1 )
      *v9 &= ~0x40uLL;
    if ( !*v9 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
