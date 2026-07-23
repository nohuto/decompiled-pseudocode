/*
 * XREFs of ExTryAcquireTimeRefreshLockExclusive @ 0x14083BD4C
 * Callers:
 *     KdpTimeSlipWork @ 0x140C1B460 (KdpTimeSlipWork.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

char __fastcall ExTryAcquireTimeRefreshLockExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bl
  AutoBoost *v6; // rax
  void *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.WaitBlockFill11[112], 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.WaitBlockFill11[112], 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx((struct _KTHREAD *)&ExpSysDbgLock.WaitBlockFill11[112], (unsigned __int64)v6, v8, v9);
    v5 = 0;
    KeLeaveCriticalRegion();
  }
  else if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v7);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return v5;
}
