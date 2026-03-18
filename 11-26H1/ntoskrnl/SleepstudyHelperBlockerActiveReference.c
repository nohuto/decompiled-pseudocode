/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x140256500
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404F4938 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D17E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140B02374 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     SshpIterateParentBlockers @ 0x14025657C (SshpIterateParentBlockers.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
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
