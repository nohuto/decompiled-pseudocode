/*
 * XREFs of ExAcquireTimeRefreshLockShared @ 0x140A8BDD0
 * Callers:
 *     ExTraceTimerResolution @ 0x1404EA784 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A8BD80 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ExAcquireTimeRefreshLockShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcStateFill[40], 0LL, 0LL, a4);
  v6 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock.ApcStateFill[40], 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ExpSysDbgLock.ApcStateFill[40],
      0,
      v5,
      (struct _KTHREAD *)&ExpSysDbgLock.ApcStateFill[40]);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, (void *)v6);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
}
