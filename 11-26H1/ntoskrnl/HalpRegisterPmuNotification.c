/*
 * XREFs of HalpRegisterPmuNotification @ 0x140B12C3C
 * Callers:
 *     HalpSetSystemInformation @ 0x140B12AD0 (HalpSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterStartPeriodicTimer @ 0x140B133D0 (HalpPmuArbiterStartPeriodicTimer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpRegisterPmuNotification(__int64 a1)
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbp
  void **i; // rcx
  _QWORD *QuantumTarget; // rax
  int started; // edi

  if ( *(_WORD *)a1 == 1 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (struct _EX_RUNDOWN_REF *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(Pool2 + 48) = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, v3);
      v8 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
      v9 = v6;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v6, (__int64)&HalpPmuArbiter);
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v7);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      for ( i = (void **)HalpPmuArbiter.SListFaultAddress; i != &HalpPmuArbiter.SListFaultAddress; i = (void **)*i )
      {
        if ( *((_DWORD *)i + 8) == *(_DWORD *)(a1 + 4) )
          goto LABEL_29;
      }
      if ( *(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags
        && *(_DWORD *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 32LL) == *(_DWORD *)(a1 + 4) )
      {
LABEL_29:
        started = -1073741811;
LABEL_17:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
        KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(v4, 0);
        return (unsigned int)started;
      }
      if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 1 )
      {
        LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
        started = HalpPmuArbiterStartPeriodicTimer();
        if ( started < 0 )
          goto LABEL_17;
      }
      QuantumTarget = (_QWORD *)HalpPmuArbiter.QuantumTarget;
      if ( *(struct _KTHREAD **)HalpPmuArbiter.QuantumTarget != (struct _KTHREAD *)&HalpPmuArbiter.SListFaultAddress )
        __fastfail(3u);
      v4->Count = (unsigned __int64)&HalpPmuArbiter.SListFaultAddress;
      v4[1].Count = (unsigned __int64)QuantumTarget;
      *QuantumTarget = v4;
      ++LODWORD(HalpPmuArbiter.InitialStack);
      HalpPmuArbiter.QuantumTarget = (unsigned __int64)v4;
      ExAcquireRundownProtection_0(v4 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
      KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      HalpNotifyActorIfPmuAvailable(v4, 0LL);
      ExReleaseRundownProtection_0(v4 + 6);
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
}
