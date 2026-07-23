/*
 * XREFs of HalpUnregisterPmuNotification @ 0x140B1314C
 * Callers:
 *     HalpSetSystemInformation @ 0x140B12AD0 (HalpSetSystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpUnregisterPmuNotification(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _EX_RUNDOWN_REF *v4; // r14
  char v5; // r15
  char v7; // si
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  int v14; // eax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v16; // rax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  int v19; // edi
  struct _EX_RUNDOWN_REF *v21; // rcx
  struct _KTHREAD *v22; // rcx
  struct _KLOCK_ENTRIES *v23; // r9
  AutoBoost *v24; // rax
  void *v25; // rdx
  AutoBoost *v26; // rdi

  v4 = 0LL;
  v5 = 0;
  v7 = 1;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741735;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v9, (__int64)&HalpPmuArbiter);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( !LODWORD(HalpPmuArbiter.InitialStack) || LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 1 )
  {
LABEL_29:
    v19 = -1073741275;
  }
  else
  {
    for ( i = (struct _EX_RUNDOWN_REF *)HalpPmuArbiter.SListFaultAddress; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
    {
      v14 = *(_DWORD *)(a1 + 4);
      if ( i == (struct _EX_RUNDOWN_REF *)&HalpPmuArbiter.SListFaultAddress )
        break;
      v4 = i;
      if ( LODWORD(i[4].Count) == v14 )
      {
        LOBYTE(i[7].Count) = 1;
        goto LABEL_13;
      }
    }
    v21 = *(struct _EX_RUNDOWN_REF **)&HalpPmuArbiter.WaitRegister.Flags;
    if ( *(_DWORD *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 32LL) != v14 )
      goto LABEL_29;
    *(_BYTE *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 56LL) = 1;
    v4 = v21;
    v5 = 1;
    if ( LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 2 )
    {
      *(_OWORD *)&HalpPmuArbiter.WaitRegister.Flags = 0LL;
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 3;
    }
LABEL_13:
    if ( (LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 4
       || LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) == 5)
      && LODWORD(HalpPmuArbiter.SchedulingGroup) == *(_DWORD *)(a1 + 4) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
      KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease(v4 + 6);
      _InterlockedExchange64((volatile __int64 *)&v4[6], 1LL);
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL, 0LL, v23);
      v11 = _interlockedbittestandset64(&HalpPmuArbiter.Header.Lock, 0LL);
      v26 = v24;
      if ( v11 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&HalpPmuArbiter, v24, (__int64)&HalpPmuArbiter);
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v26, v25);
        else
          *((_BYTE *)v26 + 10) = 1;
      }
    }
    if ( !v5 )
    {
      Count = v4->Count;
      v16 = (struct _EX_RUNDOWN_REF **)v4[1].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4 || *v16 != v4 )
        __fastfail(3u);
      *v16 = (struct _EX_RUNDOWN_REF *)Count;
      *(_QWORD *)(Count + 8) = v16;
    }
    if ( --LODWORD(HalpPmuArbiter.InitialStack) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
      KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
      KeLeaveCriticalRegion();
      v7 = 0;
      HalpNotifyActorIfPmuAvailable(0LL, 0, v17, v18);
    }
    else
    {
      ExDeleteTimer((__int64)HalpPmuArbiter.StackLimit, 1, 0, 0LL);
      HalpPmuArbiter.StackLimit = 0LL;
      LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 1;
    }
    v19 = 0;
    if ( !v7 )
      goto LABEL_25;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter.Header.Lock);
  KeAbPostRelease((unsigned __int64)&HalpPmuArbiter);
  KeLeaveCriticalRegion();
  if ( v19 >= 0 )
  {
LABEL_25:
    ExWaitForRundownProtectionRelease(v4 + 6);
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v19;
}
