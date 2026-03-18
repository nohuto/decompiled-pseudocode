/*
 * XREFs of ?vUnlock@?$SEMOBJ@$04@@QEAAXXZ @ 0x14015ED84
 * Callers:
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x140018FBC (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall SEMOBJ<5>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", *a1);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = v4 + 8;
    v7 = -v4;
    v8 = (_QWORD *)(v6 & -(__int64)(v7 != 0));
    if ( v8 )
    {
      if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0xD))-- == 1 )
        *v8 &= ~0x20uLL;
      if ( !*v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}
