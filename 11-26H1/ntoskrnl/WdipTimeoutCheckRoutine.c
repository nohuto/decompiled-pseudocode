/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x140AD5830
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 *     WdipSemLogTimeoutInformation @ 0x140AD56D8 (WdipSemLogTimeoutInformation.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD59BC (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140AD5B5C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemDisableContextProviders @ 0x140AD61C8 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD68D8 (WdipSemDeleteTransitionalInstance.c)
 */

__int64 __fastcall WdipTimeoutCheckRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  signed __int64 v7; // rbx
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *Blink; // rtt
  __int64 v11; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
      0,
      v6,
      (struct _KTHREAD *)&stru_140F06A28.Header.WaitListHead.Blink);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( LOBYTE(stru_140F042A0.PropagateBoostsEntry.Next) )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&stru_140F049E8.SListFaultAddress);
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
  v7 = WdipSemOneSecond * (HIDWORD(stru_140F06A28.SListFaultAddress) / 0xA);
  _m_prefetchw(&stru_140F06A28.Header.WaitListHead.Blink);
  v8 = stru_140F06A28.Header.WaitListHead.Blink - 1;
  if ( ((unsigned __int64)stru_140F06A28.Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( ((__int64)stru_140F06A28.Header.WaitListHead.Blink & 2) != 0
    || (Blink = stru_140F06A28.Header.WaitListHead.Blink,
        Blink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&stru_140F06A28.Header.WaitListHead.Blink,
                                         (signed __int64)v8,
                                         (signed __int64)stru_140F06A28.Header.WaitListHead.Blink)) )
  {
    ExfReleasePushLock(&stru_140F06A28.Header.WaitListHead.Blink);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28.Header.WaitListHead.Blink);
  KeLeaveCriticalRegion();
  return ExSetTimer(WdipTimeoutTimer, v7, 0LL, (ULONG_PTR)&WdipTimeoutTimerParameters);
}
