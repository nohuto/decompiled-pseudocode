/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001A6D0
 * Callers:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4B14 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(__int64 a1, HSEMAPHORE a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v14; // ecx
  int v15; // eax

  GreAcquireSemaphoreInternal(a2);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
    result = v4 + 8;
    v8 = 0LL;
    if ( v4 )
      v8 = (__int64 *)(v4 + 8);
    if ( v8 )
    {
      v9 = *v8;
      if ( (*v8 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v8 & 0x100000) == 0 )
      {
        v14 = 37;
        do
        {
          v15 = v3;
          if ( !_bittest64(&v9, v3) )
            v15 = v14;
          ++v3;
          v14 = v15;
        }
        while ( v3 < 0x40 );
        if ( v15 > 20 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v15, v9, v6);
      }
      v10 = *((unsigned __int8 *)v8 + 28);
      result = (unsigned int)(v10 + 1);
      *((_BYTE *)v8 + 28) = v10 + 1;
      if ( !(_BYTE)v10 )
        *v8 |= 0x100000uLL;
    }
  }
  return result;
}
