/*
 * XREFs of ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x14008B6B8
 * Callers:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008CA58 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GrePtInSprite @ 0x14008CE90 (GrePtInSprite.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
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
