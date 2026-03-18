/*
 * XREFs of KeSwappablePageReference @ 0x14022F4B4
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405F7C80 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
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
