/*
 * XREFs of HalpNotifyActorIfPmuAvailable @ 0x140B12E48
 * Callers:
 *     HalpFreePmcCounterSet @ 0x140582820 (HalpFreePmcCounterSet.c)
 *     HalFreeHardwareCounters @ 0x140783AF0 (HalFreeHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407841F0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpRegisterPmuNotification @ 0x140B12C3C (HalpRegisterPmuNotification.c)
 *     HalpUnregisterPmuNotification @ 0x140B1314C (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x14045DC00 (PsGetCurrentThreadId.c)
 *     HalpAcquirePmuAccessRequest @ 0x140582310 (HalpAcquirePmuAccessRequest.c)
 *     HalpReleasePmuAccessRequest @ 0x140582CC0 (HalpReleasePmuAccessRequest.c)
 *     HalpPmuArbiterNotifyActor @ 0x1407841B8 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x14078442C (HalpPmuArbiterUpdateActiveActorTime.c)
 */

void __fastcall HalpNotifyActorIfPmuAvailable(void **i, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbp
  struct _KTHREAD *v12; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  _QWORD *v17; // rcx
  void **v18; // rax
  void ***v19; // rdi
  void **QuantumTarget; // rcx

  v4 = 0;
  if ( !a2
    && (HIDWORD(HalpPmuArbiter.Header.WaitListHead.Flink)
     || (unsigned int)(LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) - 3) > 1) )
  {
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v8, (__int64)&HalpPmuArbiter);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 2 )
  {
    if ( !a2 )
      goto LABEL_45;
    v19 = *(void ****)&HalpPmuArbiter.WaitRegister.Flags;
    HalpPmuArbiterUpdateActiveActorTime();
    QuantumTarget = (void **)HalpPmuArbiter.QuantumTarget;
    if ( *(struct _KTHREAD **)HalpPmuArbiter.QuantumTarget == (struct _KTHREAD *)&HalpPmuArbiter.SListFaultAddress )
    {
      *v19 = &HalpPmuArbiter.SListFaultAddress;
      v19[1] = QuantumTarget;
      *QuantumTarget = v19;
      HalpPmuArbiter.QuantumTarget = (unsigned __int64)v19;
      *(_OWORD *)&HalpPmuArbiter.WaitRegister.Flags = 0LL;
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
      goto LABEL_45;
    }
    goto LABEL_43;
  }
  if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) != 3 )
  {
    if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 4
      && HalpPmuArbiter.StateSaveArea == PsGetCurrentThreadId() )
    {
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 5;
    }
    goto LABEL_45;
  }
  if ( (int)HalpAcquirePmuAccessRequest() >= 0 && !HIDWORD(HalpPmuArbiter.Header.WaitListHead.Flink) )
  {
    v4 = 1;
    if ( !i )
    {
      for ( i = (void **)HalpPmuArbiter.SListFaultAddress; i != &HalpPmuArbiter.SListFaultAddress; i = (void **)*i )
      {
        if ( !*((_BYTE *)i + 56) )
          goto LABEL_23;
      }
      goto LABEL_45;
    }
LABEL_23:
    LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 4;
    HalpPmuArbiter.StateSaveArea = (_XSAVE_FORMAT *)PsGetCurrentThreadId();
    LODWORD(HalpPmuArbiter.SchedulingGroup) = *((_DWORD *)i + 8);
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor((__int64)i, 0);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, v13);
    v10 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
    v16 = v14;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v14, (__int64)&HalpPmuArbiter);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 4 )
    {
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
      goto LABEL_40;
    }
    if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) != 5 )
    {
LABEL_40:
      LODWORD(HalpPmuArbiter.SchedulingGroup) = 0;
      HalpPmuArbiter.StateSaveArea = 0LL;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)i + 6);
      goto LABEL_45;
    }
    if ( *((_BYTE *)i + 56) )
    {
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
LABEL_38:
      v4 = 0;
      goto LABEL_40;
    }
    v17 = *i;
    if ( *((void ***)*i + 1) == i )
    {
      v18 = (void **)i[1];
      if ( *v18 == i )
      {
        *v18 = v17;
        v17[1] = v18;
        *(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags = i;
        *(LARGE_INTEGER *)((char *)&HalpPmuArbiter.116 + 4) = KeQueryPerformanceCounter(0LL);
        LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 2;
        goto LABEL_38;
      }
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_45:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
  KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v4 )
    HalpReleasePmuAccessRequest();
}
