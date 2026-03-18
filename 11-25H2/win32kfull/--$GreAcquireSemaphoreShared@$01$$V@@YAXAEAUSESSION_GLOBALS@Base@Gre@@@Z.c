/*
 * XREFs of ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     DxgkEngAcquireStableVisRgn @ 0x14007A1F0 (DxgkEngAcquireStableVisRgn.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall GreAcquireSemaphoreShared<2,>(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax

  EtwTraceGreLockAcquireSemaphoreShared(L"GreLock", *a1 + 1144LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 1144LL));
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
  v6 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v7 & 4) == 0 )
    {
      v10 = 0LL;
      v11 = 37;
      do
      {
        v12 = v10;
        if ( !_bittest64(&v7, v10) )
          v12 = v11;
        ++v10;
        v11 = v12;
      }
      while ( v10 < 0x40 );
      if ( v12 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v10, (unsigned int)v12);
    }
    LOBYTE(v7) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA);
    result = (unsigned int)(v7 + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA) = v7 + 1;
    if ( !(_BYTE)v7 )
      *v6 |= 4uLL;
  }
  return result;
}
