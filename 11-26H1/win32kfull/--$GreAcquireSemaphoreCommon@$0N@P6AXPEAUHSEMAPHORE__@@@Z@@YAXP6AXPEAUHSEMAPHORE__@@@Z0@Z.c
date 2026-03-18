/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B4420
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  _QWORD *v7; // rbx
  int v8; // edx
  int v9; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  a1(a2);
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
  v7 = (_QWORD *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
  {
    if ( (*v7 & 0xFFFFFFDFFFFFE000uLL) != 0 && (*v7 & 0x2000LL) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v9 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & *v7) == 0 )
          v9 = v8;
        v8 = v9;
      }
      if ( v9 > 13 && v9 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v9);
    }
    LOBYTE(i) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x15);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x15) = i + 1;
    if ( !(_BYTE)i )
      *v7 |= 0x2000uLL;
  }
  return result;
}
