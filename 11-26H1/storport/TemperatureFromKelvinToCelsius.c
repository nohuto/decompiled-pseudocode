/*
 * XREFs of TemperatureFromKelvinToCelsius @ 0x1400E3084
 * Callers:
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400E0E40 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400E1690 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117898 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117990 (NvmeNamespacePopulateLogSenseTemperature.c)
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
