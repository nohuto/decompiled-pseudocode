/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860
 * Callers:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@XZ @ 0x140268C8C (--0-$SEMOBJ@$02@@QEAA@XZ.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  _QWORD *v8; // rbx
  int v9; // edx
  int v10; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  a1(a2);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v4),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  result = v3 + 8;
  v8 = (_QWORD *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v8 )
  {
    if ( (*v8 & 0xFFFFFFDFFFFFFFF8uLL) != 0 && (*v8 & 8) == 0 )
    {
      v9 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & *v8) == 0 )
          v10 = v9;
        v9 = v10;
      }
      if ( v10 > 3 && v10 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v10);
    }
    LOBYTE(i) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xB);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xB) = i + 1;
    if ( !(_BYTE)i )
      *v8 |= 8uLL;
  }
  return result;
}
