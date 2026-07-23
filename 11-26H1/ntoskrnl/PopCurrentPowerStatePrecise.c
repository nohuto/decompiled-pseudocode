/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140AAF28C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopValidateRTCWake @ 0x140C0F8AC (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140AAF2C0 (PopBatteryUpdateCurrentState.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(__int64 a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
