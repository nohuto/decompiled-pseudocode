/*
 * XREFs of PopDiagTracePowerStateEventRundown @ 0x140AC322C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTracePowerStateEventRundown()
{
  char *v0; // rbx
  __int64 v1; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  char *v3; // [rsp+40h] [rbp-38h]
  __int64 v4; // [rsp+48h] [rbp-30h]
  char *v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
  {
    v0 = (char *)&unk_140FD6FE0;
    v1 = 56LL;
    do
    {
      UserData.Ptr = (ULONGLONG)(v0 - 32);
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = v0 - 16;
      v4 = 4LL;
      v5 = v0;
      v6 = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &UserData);
      v0 += 48;
      --v1;
    }
    while ( v1 );
  }
}
