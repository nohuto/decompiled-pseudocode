/*
 * XREFs of HalpRequestPmuAccess @ 0x140B5F240
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 *     HalAllocateHardwareCounters @ 0x140783950 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407841F0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
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
 *     HalpPmuArbiterNotifyActor @ 0x1407841B8 (HalpPmuArbiterNotifyActor.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x14078442C (HalpPmuArbiterUpdateActiveActorTime.c)
 */

__int64 __fastcall HalpRequestPmuAccess(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // r15
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbp
  struct _EX_RUNDOWN_REF *v11; // r14
  struct _KTHREAD *v12; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  _QWORD *QuantumTarget; // rcx

  v4 = 0;
  v5 = 0;
  if ( ((LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) - 1) & 0xFFFFFFFD) == 0 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v7, (__int64)&HalpPmuArbiter);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 2 )
  {
    v11 = *(struct _EX_RUNDOWN_REF **)&HalpPmuArbiter.WaitRegister.Flags;
    LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 4;
    LODWORD(HalpPmuArbiter.SchedulingGroup) = *(_DWORD *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 32LL);
    HalpPmuArbiter.StateSaveArea = (_XSAVE_FORMAT *)PsGetCurrentThreadId();
    ExAcquireRundownProtection_0(v11 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    HalpPmuArbiterNotifyActor((__int64)v11, 1);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, v13);
    v9 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
    v16 = v14;
    if ( v9 )
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
      v5 = -2147483631;
      if ( *(_BYTE *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 56LL) )
        goto LABEL_25;
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 2;
    }
    else if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 5 )
    {
      HalpPmuArbiterUpdateActiveActorTime();
      if ( *(_BYTE *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 56LL) )
      {
LABEL_37:
        *(_OWORD *)&HalpPmuArbiter.WaitRegister.Flags = 0LL;
        LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
        goto LABEL_29;
      }
LABEL_25:
      QuantumTarget = (_QWORD *)HalpPmuArbiter.QuantumTarget;
      if ( *(struct _KTHREAD **)HalpPmuArbiter.QuantumTarget != (struct _KTHREAD *)&HalpPmuArbiter.SListFaultAddress )
        __fastfail(3u);
      v11->Count = (unsigned __int64)&HalpPmuArbiter.SListFaultAddress;
      v11[1].Count = (unsigned __int64)QuantumTarget;
      *QuantumTarget = v11;
      HalpPmuArbiter.QuantumTarget = (unsigned __int64)v11;
      goto LABEL_37;
    }
LABEL_29:
    LODWORD(HalpPmuArbiter.SchedulingGroup) = 0;
    HalpPmuArbiter.StateSaveArea = 0LL;
    ExReleaseRundownProtection_0(v11 + 6);
    goto LABEL_30;
  }
  if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) != 4 )
  {
    if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) != 5 )
      goto LABEL_30;
    goto LABEL_11;
  }
  if ( HalpPmuArbiter.StateSaveArea != PsGetCurrentThreadId() )
  {
LABEL_11:
    v5 = -2147483631;
    goto LABEL_30;
  }
  LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 5;
  v4 = 1;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
  KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 && !v4 )
    return (unsigned int)HalpAcquirePmuAccessRequest();
  return (unsigned int)v5;
}
