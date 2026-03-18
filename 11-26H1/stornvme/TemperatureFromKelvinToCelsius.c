/*
 * XREFs of TemperatureFromKelvinToCelsius @ 0x14002304C
 * Callers:
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x14001DFC0 (NVMeGetLogPageHealthInfoCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall TemperatureFromKelvinToCelsius(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return -1;
  if ( a1 > 0x20Fu )
    return -2;
  if ( a1 <= 0x111u )
    return 0;
  return a1 - 17;
}
