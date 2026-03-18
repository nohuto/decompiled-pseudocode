/*
 * XREFs of HUBBOOT_RegisterBootDevice @ 0x140041868
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1400164E0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBBOOT_RegisterBootDevice(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[6]; // [rsp+30h] [rbp-30h] BYREF

  HIDWORD(v7[0]) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"ExNotifyBootDeviceRemoval");
  g_ExNotifyBootDeviceRemoval = (__int64 (__fastcall *)(_QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"ExRegisterBootDevice");
  g_ExRegisterBootDevice = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  v4 = -1073741637;
  if ( g_ExRegisterBootDevice )
  {
    v7[0] = 1LL;
    v7[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver);
    v7[2] = 0LL;
    v7[3] = HUBBOOT_IsBootDeviceReady;
    v7[4] = a1;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))g_ExRegisterBootDevice)(v7, a2);
  }
  return v4;
}
