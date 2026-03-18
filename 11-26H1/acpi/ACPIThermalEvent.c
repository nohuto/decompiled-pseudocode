/*
 * XREFs of ACPIThermalEvent @ 0x14002B360
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x14002CD78 (WPP_RECORDER_SF_Dqssdddd.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  unsigned int v3; // esi
  __int64 DeviceExtension; // rdi
  int v5; // ebx
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  TimeFields = 0LL;
  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, 17);
  v5 = a2 - 128;
  if ( v5 )
  {
    if ( v5 == 1 )
      v3 = 536871046;
  }
  else
  {
    v3 = 536870978;
  }
  return ACPIThermalLoop(DeviceExtension, v3);
}
