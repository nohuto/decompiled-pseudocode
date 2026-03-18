/*
 * XREFs of WheaSelLogSetNtSchedulerAvailability @ 0x1406D45B8
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D4674 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 */

void __fastcall WheaSelLogSetNtSchedulerAvailability(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapConfigTableLock.ApcStateFill[40], 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock.ApcStateFill[40], 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapConfigTableLock.ApcStateFill[40],
      v5,
      (__int64)&WheapConfigTableLock.ApcStateFill[40]);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v8 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v8 + 10) = 1;
    }
  }
  WheapSelLogSetNtSchedulerAvailabilityNoLock();
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&WheapConfigTableLock.ApcStateFill[40],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock.ApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&WheapConfigTableLock.ApcStateFill[40]);
  KeLeaveCriticalRegion();
}
