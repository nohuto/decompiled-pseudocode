/*
 * XREFs of ?GreAcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057520
 * Callers:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1400572C0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall GreAcquirePushLockShared(struct W32_PUSH_LOCK *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  char v7; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v10; // edx
  unsigned __int64 i; // rcx
  int v12; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
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
  v5 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v5 )
  {
    v6 = *v5;
    if ( (*v5 & 0xFFFFFFC000000000uLL) != 0 )
    {
      v10 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v12 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v6) == 0 )
          v12 = v10;
        v10 = v12;
      }
      if ( v12 > 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v12, v6);
    }
    v7 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1E);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1E) = v7 + 1;
    if ( !v7 )
      *v5 |= 0x2000000000uLL;
  }
}
