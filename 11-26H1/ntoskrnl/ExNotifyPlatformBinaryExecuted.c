/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x140838BBC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExNotifyPlatformBinaryExecuted(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  void *InitialStack; // rdi
  __int64 v10; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&ExpPlatformBinaryLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpPlatformBinaryLock, v5, (__int64)&ExpPlatformBinaryLock);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  InitialStack = ExpPlatformBinaryLock.InitialStack;
  ExpPlatformBinaryLock.InitialStack = (void *)-1LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10);
  if ( InitialStack )
    ExFreePoolWithTag(InitialStack, 0x54425057u);
}
