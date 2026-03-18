/*
 * XREFs of PopDiagTraceFxDeviceDirectedTransition @ 0x1403B919C
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1403B782C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021A640 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceDirectedTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  BOOLEAN result; // al
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  __int64 v8; // [rsp+68h] [rbp-20h]

  v2 = a2;
  v5 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 25, a2);
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = v2;
      v7 = &v4;
      *(_QWORD *)&UserData.Size = 8LL;
      v8 = 4LL;
      return EtwWriteEx(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START,
               0LL,
               0,
               0LL,
               0LL,
               2u,
               &UserData);
    }
  }
  return result;
}
