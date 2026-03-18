/*
 * XREFs of PopDiagTraceFxDevicePowerState @ 0x140218B90
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403B46F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021A640 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, int a2)
{
  char v2; // bl
  BOOLEAN result; // al
  char v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v7; // [rsp+60h] [rbp-28h]
  __int64 v8; // [rsp+68h] [rbp-20h]

  v2 = a2;
  v5 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 6LL, a2);
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DEVICE_POWER_STATE);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      v8 = 1LL;
      v7 = &v4;
      v4 = v2 - 1;
      return EtwWriteEx(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DEVICE_POWER_STATE,
               0LL,
               1u,
               0LL,
               0LL,
               2u,
               &UserData);
    }
  }
  return result;
}
