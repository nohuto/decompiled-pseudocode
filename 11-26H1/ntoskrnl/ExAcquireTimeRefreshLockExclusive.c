/*
 * XREFs of ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404DC1EC (ExCleanTimerResolutionRequest.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A7374C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A737C0 (NtSetTimerResolution.c)
 *     ExpTimeRefreshWork @ 0x140C05510 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ExAcquireTimeRefreshLockExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.WaitBlockFill11[112], 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.WaitBlockFill11[112], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.WaitBlockFill11[112],
      v5,
      (__int64)&ExpSysDbgLock.WaitBlockFill11[112]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
