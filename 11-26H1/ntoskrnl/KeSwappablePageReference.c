/*
 * XREFs of KeSwappablePageReference @ 0x140230E44
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 */

void __fastcall KeSwappablePageReference(__int64 a1)
{
  unsigned __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rsi
  __int64 v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // r14

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 2uLL) + 2;
  if ( v2 < 2 )
    __fastfail(0xEu);
  if ( (v2 & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (struct _KTHREAD *)(a1 + 8);
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 8), 0LL);
    v7 = (AutoBoost *)v5;
    if ( _interlockedbittestandset64(&v4->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, v4);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    if ( (*(_QWORD *)(a1 + 16) & 1) == 0 && (int)MmProbeAndLockPagesEx(a1 + 24, 2LL) >= 0 )
      _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease(v4);
    KeLeaveCriticalRegion();
  }
}
