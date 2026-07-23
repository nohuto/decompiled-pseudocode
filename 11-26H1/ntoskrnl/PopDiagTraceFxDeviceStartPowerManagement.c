/*
 * XREFs of PopDiagTraceFxDeviceStartPowerManagement @ 0x140B61C38
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceStartPowerManagement(__int64 a1)
{
  BOOLEAN result; // al
  char v2; // r9
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v3 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 3, 0LL);
  if ( PopDiagHandleRegistered != v2 )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v3;
      *(_QWORD *)&UserData.Size = 8LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT, 0LL, 1u, &UserData);
    }
  }
  return result;
}
