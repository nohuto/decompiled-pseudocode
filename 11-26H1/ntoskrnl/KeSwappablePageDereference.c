/*
 * XREFs of KeSwappablePageDereference @ 0x14041053C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1404102F4 (KiOutSwapKernelStacks.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x140A83D78 (PspSchedulerSharedDataRegionSlotFree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 */

void __fastcall KeSwappablePageDereference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp

  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFEuLL) - 2;
  if ( v5 >= 0xFFFFFFFFFFFFFFFEuLL )
    __fastfail(0xEu);
  if ( v5 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)(a1 + 8);
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 1LL) == 1 )
      MmUnlockPages((PMDL)(a1 + 24));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((unsigned __int64)v7);
    KeLeaveCriticalRegion();
  }
}
