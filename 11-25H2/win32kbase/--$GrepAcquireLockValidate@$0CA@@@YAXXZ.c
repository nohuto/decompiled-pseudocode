/*
 * XREFs of ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C124
 * Callers:
 *     EngAllocMem @ 0x14001BE30 (EngAllocMem.c)
 *     EngFreeMem @ 0x14001D0A0 (EngFreeMem.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140047360 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x140047880 (MultiUserGreTrackAddEngResource.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<32>()
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v10; // edx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  result = v2 + 8;
  v6 = (__int64 *)((v2 + 8) & -(__int64)(v2 != 0));
  if ( v6 )
  {
    v7 = *v6;
    result = 0xFFFFFFFF00000000uLL;
    if ( (*v6 & 0xFFFFFFFF00000000uLL) != 0 && (v7 & 0x100000000LL) == 0 )
    {
      v10 = 37;
      do
      {
        result = (unsigned int)v1;
        if ( !_bittest64(&v7, v1) )
          result = v10;
        ++v1;
        v10 = result;
      }
      while ( v1 < 0x40 );
      if ( (int)result > 32 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, (unsigned int)result, v4);
    }
    *v6 |= 0x100000000uLL;
  }
  return result;
}
