/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x1404A5D5C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemLatencyUpdate(char a1, int a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  const EVENT_DESCRIPTOR *v4; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  if ( byte_140E67628 )
  {
    v3 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
    if ( a1 )
      v3 = &POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v3) )
    {
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
      if ( !a1 )
        v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
      EtwWriteEx(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v4, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
