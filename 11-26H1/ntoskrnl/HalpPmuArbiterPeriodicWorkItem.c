/*
 * XREFs of HalpPmuArbiterPeriodicWorkItem @ 0x1407841F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpReleasePmuAccessRequest @ 0x140582CC0 (HalpReleasePmuAccessRequest.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x140B5F240 (HalpRequestPmuAccess.c)
 */

void __fastcall HalpPmuArbiterPeriodicWorkItem(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  __int64 v9; // rbx
  __int128 v10; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v5, (__int64)&HalpPmuArbiter);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( *(struct _LIST_ENTRY **)((char *)&HalpPmuArbiter.Header.WaitListHead.Flink + 4) == (struct _LIST_ENTRY *)0x300000000LL )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
  if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 2
    && LODWORD(HalpPmuArbiter.InitialStack) > 1
    && (v9 = *(__int64 *)((char *)&HalpPmuArbiter.116 + 4),
        v10 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v9),
        (__int64)(v10 / PerformanceFrequency.QuadPart) >= HalpPmuArbiter.SystemCallNumber) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    if ( (int)HalpRequestPmuAccess() >= 0 )
    {
      HalpReleasePmuAccessRequest();
LABEL_18:
      HalpNotifyActorIfPmuAvailable(0LL, 0LL);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
  }
  _InterlockedExchange((volatile __int32 *)&HalpPmuArbiter.KernelStack, 0);
}
