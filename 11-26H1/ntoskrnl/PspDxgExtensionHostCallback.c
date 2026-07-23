/*
 * XREFs of PspDxgExtensionHostCallback @ 0x1407F6360
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspDxgExtensionHostCallback(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi

  if ( ((a1 - 1) & 0xFFFFFFFD) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64(
           (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[16],
           0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry,
        v6,
        (__int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v7);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( a1 == 1 )
      PsAltSystemCallRegistrationLock.SchedulerApc.Thread = (struct _KTHREAD *)((unsigned __int64)PsAltSystemCallRegistrationLock.SchedulerApc.Thread | 2);
    else
      PsAltSystemCallRegistrationLock.SchedulerApc.Thread = (struct _KTHREAD *)((unsigned __int64)PsAltSystemCallRegistrationLock.SchedulerApc.Thread & ~2uLL);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.SchedulerApc.ApcListEntry);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
