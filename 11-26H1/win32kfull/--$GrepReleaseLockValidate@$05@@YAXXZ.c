/*
 * XREFs of ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4
 * Callers:
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140038CA0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D0544 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void GrepReleaseLockValidate<6>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v3 = v1 + 8;
  v4 = -v1;
  v5 = (_QWORD *)(v3 & -(__int64)(v4 != 0));
  if ( v5 )
  {
    if ( (*(_BYTE *)((v3 & -(__int64)(v4 != 0)) + 0xE))-- == 1 )
      *v5 &= ~0x40uLL;
    if ( !*v5 )
      GrepOnAllLocksReleased();
  }
}
