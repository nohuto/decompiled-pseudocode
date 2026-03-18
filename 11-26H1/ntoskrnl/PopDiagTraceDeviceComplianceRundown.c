/*
 * XREFs of PopDiagTraceDeviceComplianceRundown @ 0x140AC1418
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopDiagTraceDeviceComplianceRundown()
{
  __int64 v0; // rax
  int v1; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v3; // [rsp+48h] [rbp-20h]
  __int64 v4; // [rsp+50h] [rbp-18h]

  if ( byte_140E67628
    && EtwEventEnabled(
         *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
         &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
  {
    v1 = 0;
    v0 = 0LL;
    do
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = 4LL;
      v3 = &PopCsDeviceCompliance[v0];
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN,
        0LL,
        2u,
        &UserData);
      v0 = (unsigned int)(v1 + 1);
      v1 = v0;
    }
    while ( (unsigned int)v0 < 5 );
  }
}
