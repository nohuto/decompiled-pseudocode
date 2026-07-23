/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404EDF18
 * Callers:
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407CC67C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x1409C2104 (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140257E90 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsNotifyScenarioStateChange(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)*((_QWORD *)&PopDirectedDripsDiagLock.SavedApcState.ApcListHead[2].Flink + a1);
  if ( v3 )
  {
    if ( a2 )
      return SleepstudyHelperBlockerActiveReference(v3);
    else
      return SleepstudyHelperBlockerActiveDereference(v3);
  }
  return result;
}
