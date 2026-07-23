/*
 * XREFs of PopDiagTraceSystemIdleRundown @ 0x140AC36B8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTraceSystemIdleRundown()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
    {
      UserData.Ptr = (ULONGLONG)&PopIdleScanInterval;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
