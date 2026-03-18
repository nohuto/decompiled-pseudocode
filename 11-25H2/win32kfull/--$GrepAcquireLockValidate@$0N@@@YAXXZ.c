/*
 * XREFs of ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x140078044
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepAcquireLockValidate<13>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v9; // edx
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
  v5 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v5 )
  {
    v6 = *v5;
    if ( (*v5 & 0xFFFFFFFFFFFFE000uLL) != 0 && (*v5 & 0x2000) == 0 )
    {
      v9 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        if ( !_bittest64(&v6, i) )
          v10 = v9;
        v9 = v10;
      }
      if ( v10 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v10, v6);
    }
    LOBYTE(i) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x15);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x15) = i + 1;
    if ( !(_BYTE)i )
      *v5 |= 0x2000uLL;
  }
  return result;
}
