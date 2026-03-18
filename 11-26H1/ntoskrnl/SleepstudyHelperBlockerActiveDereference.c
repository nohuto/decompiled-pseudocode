/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x140256460
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404F4938 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407D17A0 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D17E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140B02374 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x1402564B8 (SshpBlockerActiveDereference.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // bl
  unsigned int active; // esi

  if ( SpinLock )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    active = SshpBlockerActiveDereference(SpinLock, 1LL);
    KeReleaseSpinLock(SpinLock, v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
