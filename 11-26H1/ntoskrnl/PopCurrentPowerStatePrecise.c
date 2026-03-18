/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140AB129C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopValidateRTCWake @ 0x140C0969C (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140AB12D0 (PopBatteryUpdateCurrentState.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(__int64 a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
