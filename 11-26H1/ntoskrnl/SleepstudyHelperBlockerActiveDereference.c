/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x140257DF0
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404EDF18 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407D4840 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D4888 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140B040A4 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x140257E48 (SshpBlockerActiveDereference.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
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
