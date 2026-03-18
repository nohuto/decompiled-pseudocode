/*
 * XREFs of ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001A424
 * Callers:
 *     ?GreAcquireHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C64C0 (-GreAcquireHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreAcquireSemaphore<20,>(__int64 *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // r8
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // edx
  int v12; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"Hmgr", *a1 + 1512, 0LL);
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v1 + 1512));
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
    if ( (*v7 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v7 & 0x100000) == 0 )
    {
      v11 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v12 = i;
        if ( !_bittest64(&v8, i) )
          v12 = v11;
        v11 = v12;
      }
      if ( v12 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v12, v8);
    }
    LOBYTE(i) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1C);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1C) = i + 1;
    if ( !(_BYTE)i )
      *v7 |= 0x100000uLL;
  }
  return result;
}
