/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C
 * Callers:
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     EngpMovePointer @ 0x14001AD74 (EngpMovePointer.c)
 *     GreRedrawSpriteOverlapPresent @ 0x14001B79C (GreRedrawSpriteOverlapPresent.c)
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     EngSetPointerShape @ 0x1400A0BB0 (EngSetPointerShape.c)
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     GreSaveScreenBits @ 0x140325FC8 (GreSaveScreenBits.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
