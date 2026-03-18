/*
 * XREFs of WdipSemUpdate @ 0x14081EC6C
 * Callers:
 *     WdiUpdateSem @ 0x140532B84 (WdiUpdateSem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14081F55C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408208C4 (WdipSemShutdown.c)
 */

__int64 __fastcall WdipSemUpdate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  unsigned int v9; // ebx
  signed __int64 v10; // rdx
  _ULARGE_INTEGER DueTime; // rtt

  if ( !LOBYTE(stru_140F03F40.Timer.Header.WaitListHead.Blink) )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.Timer.DueTime, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&stru_140F03F40.Timer.DueTime.QuadPart, v5, (__int64)&stru_140F03F40.Timer.DueTime);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) )
    WdipSemShutdown();
  v9 = WdipSemCleanStart();
  _m_prefetchw(&stru_140F03F40.Timer.DueTime);
  v10 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
  if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = stru_140F03F40.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                              v10,
                              stru_140F03F40.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
  KeLeaveCriticalRegion();
  return v9;
}
