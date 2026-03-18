/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x14002A484
 * Callers:
 *     ACPIThermalTMPCallback @ 0x140029BA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperatureComplete @ 0x14006A660 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalReadTemperature @ 0x1400D0330 (ACPIThermalReadTemperature.c)
 * Callees:
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x14003B044 (WPP_RECORDER_SF_ddqssdddd.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-48h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    TimeFields = 0LL;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)(v2 + 16) / 0xAu, TimeFields.Second, 19);
    ACPIThermalLoop(a1, 2048LL);
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    v5 = MEMORY[0xFFFFF78000000008];
    if ( (char *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + *(_QWORD *)(v2 + 320)) < (char *)MEMORY[0xFFFFF78000000008]
      && *(_DWORD *)(v2 + 328) != a2 )
    {
      *(_DWORD *)(v2 + 328) = a2;
      *(_QWORD *)(v2 + 320) = v5;
      ACPIThermalLoop(a1, 0x4000LL);
    }
  }
}
