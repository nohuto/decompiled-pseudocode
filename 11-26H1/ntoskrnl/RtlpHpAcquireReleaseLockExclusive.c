/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x1404D8A40
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1404D88AC (RtlpHpHeapExtendContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpHpAcquireReleaseLockExclusive(struct _KTHREAD *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  KIRQL v9; // al

  if ( a2 )
  {
    v9 = ExAcquireSpinLockExclusive(&a1->Header.Lock);
    ExReleaseSpinLockExclusive(&a1->Header.Lock, v9);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v6, (__int64)a1);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveGuardedRegion();
  }
}
