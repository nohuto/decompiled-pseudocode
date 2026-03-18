/*
 * XREFs of ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046A5C
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<14>::SEMOBJSHARED<14>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  char v9; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax

  v3 = (HSEMAPHORE)(*a2 + 832LL);
  *a1 = v3;
  EngAcquireSemaphoreShared(v3);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFC000uLL) != 0 && (v8 & 0x4000) == 0 )
    {
      v13 = 0LL;
      v14 = 37;
      do
      {
        v15 = v13;
        if ( !_bittest64(&v8, v13) )
          v15 = v14;
        ++v13;
        v14 = v15;
      }
      while ( v13 < 0x40 );
      if ( v15 > 14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v13, (unsigned int)v15);
    }
    v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x16);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x16) = v9 + 1;
    if ( !v9 )
      *v7 |= 0x4000uLL;
  }
  return a1;
}
