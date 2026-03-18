/*
 * XREFs of ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404E2B78 (ExCleanTimerResolutionRequest.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1408364F8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A6677C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A667F0 (NtSetTimerResolution.c)
 *     ExpTimeRefreshWork @ 0x140BFF300 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ExAcquireTimeRefreshLockExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcStateFill[40], 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ApcStateFill[40], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.ApcStateFill[40],
      v5,
      (__int64)&ExpSysDbgLock.ApcStateFill[40]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
