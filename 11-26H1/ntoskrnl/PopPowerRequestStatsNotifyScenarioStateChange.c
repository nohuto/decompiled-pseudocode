/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404F4938
 * Callers:
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407C95DC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140946794 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140256460 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140256500 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsNotifyScenarioStateChange(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)PopDirectedDripsUmLock.Padding[a1 + 1];
  if ( v3 )
  {
    if ( a2 )
      return SleepstudyHelperBlockerActiveReference(v3);
    else
      return SleepstudyHelperBlockerActiveDereference(v3);
  }
  return result;
}
