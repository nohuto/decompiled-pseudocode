/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x140257E90
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404EDF18 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D4888 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140B040A4 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     SshpIterateParentBlockers @ 0x140257F0C (SshpIterateParentBlockers.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveReference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // ebx
  KIRQL v3; // si

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    if ( *((_DWORD *)SpinLock + 5) == 0x7FFFFFFF )
      v1 = -1073741675;
    else
      SshpIterateParentBlockers(SpinLock);
    KeReleaseSpinLock(SpinLock, v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
