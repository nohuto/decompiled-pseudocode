/*
 * XREFs of ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046508
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreUnlockVisRgnShared @ 0x14012AEC0 (GreUnlockVisRgnShared.c)
 *     ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x14012D0B0 (-DxgkEngReleaseWin32kLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x14014BD44 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C76A0 (-GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1401C7FD0 (GreUnlockVisRgnWithDmcLockAcquiredEx.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleaseSemaphoreShared<2,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreLock", (unsigned int)*a1 + 1144);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v5 = v3 + 8;
  v6 = -v3;
  if ( (v5 & -(__int64)(v6 != 0)) != 0 && (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0xA))-- == 1 )
    *(_QWORD *)(v5 & -(__int64)(v6 != 0)) &= ~4uLL;
  GreReleaseSemaphoreSharedInternal(v1 + 11);
}
