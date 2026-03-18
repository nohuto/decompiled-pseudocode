/*
 * XREFs of ACPIThermalRereadTemperature @ 0x14002ABBC
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x14002BB60 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_qssdddd @ 0x14003F308 (WPP_RECORDER_SF_qssdddd.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  union _LARGE_INTEGER v3; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v4; // [rsp+68h] [rbp-20h] BYREF

  v4 = 0LL;
  v3.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v3, &v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qssdddd(WPP_GLOBAL_Control->DeviceExtension, v4.Second, v4.Minute, v4.Hour);
  return ACPIThermalLoop(a1, 536870914LL);
}
