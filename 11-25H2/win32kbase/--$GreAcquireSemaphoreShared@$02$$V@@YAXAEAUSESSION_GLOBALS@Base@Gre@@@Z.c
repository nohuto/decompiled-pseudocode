/*
 * XREFs of ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045A94
 * Callers:
 *     GreLockVisRgnShared @ 0x140042CA0 (GreLockVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140089890 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140045A00 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreAcquireSemaphoreShared<3,>(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // r8d
  int v12; // eax

  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"DCVisRgn", *a1 + 728);
  EngAcquireSemaphoreShared((HSEMAPHORE)(*a1 + 728LL));
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
  result = v3 + 8;
  v7 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v7 & 8) == 0 )
    {
      v5 = 0LL;
      v11 = 37;
      do
      {
        v12 = v5;
        if ( !_bittest64(&v8, v5) )
          v12 = v11;
        ++v5;
        v11 = v12;
      }
      while ( v5 < 0x40 );
      if ( v12 > 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v12);
    }
    LOBYTE(v5) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xB);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xB) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v7 |= 8uLL;
  }
  return result;
}
