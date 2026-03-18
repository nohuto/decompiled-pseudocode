/*
 * XREFs of ExTryAcquireTimeRefreshLockExclusive @ 0x140835B0C
 * Callers:
 *     KdpTimeSlipWork @ 0x140C15460 (KdpTimeSlipWork.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
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
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcStateFill[40], 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ApcStateFill[40], 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx((struct _KTHREAD *)&ExpSysDbgLock.ApcStateFill[40], (unsigned __int64)v6, v8, v9);
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
