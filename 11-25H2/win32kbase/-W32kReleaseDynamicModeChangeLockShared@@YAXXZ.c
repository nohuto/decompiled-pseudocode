/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x140046870
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall W32kReleaseDynamicModeChangeLockShared(__int64 a1)
{
  struct _ERESOURCE *v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", (_DWORD)v1 + 624);
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
  if ( (v5 & -(__int64)(v6 != 0)) != 0 && (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 9))-- == 1 )
    *(_QWORD *)(v5 & -(__int64)(v6 != 0)) &= ~2uLL;
  GreReleaseSemaphoreSharedInternal(v1 + 6);
}
