/*
 * XREFs of WdipSemInitialize @ 0x14081EB98
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14081F55C (WdipSemInitializeGlobalState.c)
 */

void WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rbx
  signed __int64 v6; // rdx
  _ULARGE_INTEGER DueTime; // rtt

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.Timer.DueTime, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&stru_140F03F40.Timer.DueTime.QuadPart, v2, (__int64)&stru_140F03F40.Timer.DueTime);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v3);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  WdipSemCleanStart();
  _m_prefetchw(&stru_140F03F40.Timer.DueTime);
  v6 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
  if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = stru_140F03F40.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                              v6,
                              stru_140F03F40.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
  KeLeaveCriticalRegion();
}
