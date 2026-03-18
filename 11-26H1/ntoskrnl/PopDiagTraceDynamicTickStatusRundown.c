/*
 * XREFs of PopDiagTraceDynamicTickStatusRundown @ 0x140AC14D4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeGetDynamicTickDisableReason @ 0x14050476C (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopDiagTraceDynamicTickStatusRundown()
{
  char DynamicTickDisableReason; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN) )
    {
      DynamicTickDisableReason = KeGetDynamicTickDisableReason();
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&DynamicTickDisableReason;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN,
        0LL,
        1u,
        &UserData);
    }
  }
}
