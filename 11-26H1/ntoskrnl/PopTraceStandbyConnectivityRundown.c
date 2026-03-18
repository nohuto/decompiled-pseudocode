/*
 * XREFs of PopTraceStandbyConnectivityRundown @ 0x140AC16A0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopTraceStandbyConnectivityRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v1; // [rsp+40h] [rbp-28h]
  __int64 v2; // [rsp+48h] [rbp-20h]

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
    {
      UserData.Ptr = (ULONGLONG)&PopNetStandbyState;
      *(_QWORD *)&UserData.Size = 4LL;
      v1 = &PopNetStandbyReason;
      v2 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN,
        0LL,
        2u,
        &UserData);
    }
  }
}
