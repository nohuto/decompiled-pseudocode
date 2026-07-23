/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x140866E18
 * Callers:
 *     CmFcShutdownSystem @ 0x14085AFA4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0 (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcManagerDrainAllFeatureUsageNotifications(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.SchedulerApc.Reserved[1], 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.SchedulerApcFill5[40], 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.SchedulerApc.Reserved[1],
      v5,
      (__int64)&CmpFreezeListLock.SchedulerApc.Reserved[1]);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  LOBYTE(v6) = 1;
  CmFcpManagerDrainUsageNotifications(&CmpFreezeListLock.Timer.TimerListEntry, v6);
  LOBYTE(v9) = 1;
  CmFcpManagerDrainUsageNotifications(&CmpFreezeListLock.Timer.TimerListEntry, v9);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&CmpFreezeListLock.SchedulerApc.Reserved[1],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.SchedulerApc.Reserved[1]);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.SchedulerApc.Reserved[1]);
  KeLeaveCriticalRegion();
}
