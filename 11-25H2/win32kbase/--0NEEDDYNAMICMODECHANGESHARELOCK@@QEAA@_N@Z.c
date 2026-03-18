/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400465D0
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E76C0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140045A00 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  _DWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  char v10; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax

  v4 = *(_DWORD **)(W32GetSessionState(this) + 88);
  *(_QWORD *)this = v4;
  *((_BYTE *)this + 8) = a2;
  if ( a2 )
  {
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"DynamicModeChange", *v4 + 624);
    EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v4 + 624LL));
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v6 = *ThreadWin32Thread;
    }
    v8 = (__int64 *)((v6 + 8) & -(__int64)(v6 != 0));
    if ( v8 )
    {
      v9 = *v8;
      if ( (*v8 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v8 & 2) == 0 )
      {
        v14 = 0LL;
        v15 = 37;
        do
        {
          v16 = v14;
          if ( !_bittest64(&v9, v14) )
            v16 = v15;
          ++v14;
          v15 = v16;
        }
        while ( v14 < 0x40 );
        if ( v16 > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v9, (unsigned int)v16);
      }
      v10 = *(_BYTE *)(((v6 + 8) & -(__int64)(v6 != 0)) + 9);
      *(_BYTE *)(((v6 + 8) & -(__int64)(v6 != 0)) + 9) = v10 + 1;
      if ( !v10 )
        *v8 |= 2uLL;
    }
  }
  return this;
}
