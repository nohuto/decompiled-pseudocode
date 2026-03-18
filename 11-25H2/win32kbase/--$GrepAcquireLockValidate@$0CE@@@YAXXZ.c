/*
 * XREFs of ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140085008
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140084B10 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ??0?$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140084FD8 (--0-$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<36>()
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
    result = 0xFFFFFFF000000000uLL;
    if ( (*v6 & 0xFFFFFFF000000000uLL) != 0 && (v7 & 0x1000000000LL) == 0 )
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
      if ( (int)result > 36 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, (unsigned int)result, v4);
    }
    *v6 |= 0x1000000000uLL;
  }
  return result;
}
