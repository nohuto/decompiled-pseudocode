/*
 * XREFs of ??$GrepAcquireLockValidate@$0A@@@YAXXZ @ 0x1400D7E20
 * Callers:
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140147584 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepAcquireLockValidate<0>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

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
  result = v1 + 8;
  v4 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v4 )
  {
    v5 = *v4;
    if ( *v4 && (v5 & 1) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v5, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v10);
    }
    LOBYTE(v5) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 8);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 8) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v4 |= 1uLL;
  }
  return result;
}
