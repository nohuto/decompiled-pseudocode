/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x140607E5C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

__int64 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent((PRKEVENT)&stru_140F0F620.WaitBlockFill11[64]);
  v1[0] = 0LL;
  v1[1] = -1LL;
  return KeSetTimer2(
           (__int64)&stru_140F0F620.WaitBlock[2],
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
