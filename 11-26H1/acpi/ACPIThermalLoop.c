/*
 * XREFs of ACPIThermalLoop @ 0x140029C00
 * Callers:
 *     ACPIThermalTMPCallback @ 0x140029BA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x14002A484 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalRereadTemperature @ 0x14002ABBC (ACPIThermalRereadTemperature.c)
 *     ACPIThermalDeviceControl @ 0x14002ACF0 (ACPIThermalDeviceControl.c)
 *     ACPIThermalEvent @ 0x14002B360 (ACPIThermalEvent.c)
 *     ACPIThermalComplete @ 0x14004DCF0 (ACPIThermalComplete.c)
 *     ACPIThermalStopZone @ 0x140055990 (ACPIThermalStopZone.c)
 *     ACPIThermalReadTemperatureComplete @ 0x14006A660 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalStopZoneWorker @ 0x14006A72C (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
