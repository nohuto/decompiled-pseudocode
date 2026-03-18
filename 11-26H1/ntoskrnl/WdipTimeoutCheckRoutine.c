/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x140AD8D80
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExSetTimer @ 0x14037A420 (ExSetTimer.c)
 *     WdipSemLogTimeoutInformation @ 0x140AD8C30 (WdipSemLogTimeoutInformation.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD8F0C (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140AD90AC (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemDisableContextProviders @ 0x140AD9718 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD9E28 (WdipSemDeleteTransitionalInstance.c)
 */

__int64 __fastcall WdipTimeoutCheckRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  signed __int64 v7; // rbx
  signed __int64 v8; // rdx
  _ULARGE_INTEGER DueTime; // rtt
  __int64 v11; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.Timer.DueTime, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140F03F40.Timer.DueTime,
      0,
      v6,
      (struct _KTHREAD *)&stru_140F03F40.Timer.DueTime);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( LOBYTE(stru_140F060A8.Process) )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&stru_140F03F40.320);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v11) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v11);
      v13 = TimedOutInstanceForDeletion;
      v14 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v15 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v16 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v14;
      WdipSemLogTimeoutInformation(v15, *(_WORD *)(v15 + 16), v16);
      WdipSemDeleteTransitionalInstance(v13);
    }
  }
  v7 = WdipSemOneSecond * (HIDWORD(stru_140F03F40.Timer.Header.WaitListHead.Blink) / 0xA);
  _m_prefetchw(&stru_140F03F40.Timer.DueTime);
  v8 = stru_140F03F40.Timer.DueTime.QuadPart - 16;
  if ( (stru_140F03F40.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (stru_140F03F40.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = stru_140F03F40.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&stru_140F03F40.Timer.DueTime.QuadPart,
                              v8,
                              stru_140F03F40.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&stru_140F03F40.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.Timer.DueTime);
  KeLeaveCriticalRegion();
  return ExSetTimer(WdipTimeoutTimer, v7, 0LL, (ULONG_PTR)&WdipTimeoutTimerParameters);
}
