/*
 * XREFs of PpmEventQosSupport @ 0x140B2EABC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosSupport(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  BOOL v4; // [rsp+30h] [rbp-40h] BYREF
  BOOL v5; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  BOOL *v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-20h]
  int *v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]

  v1 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_QOS_SUPPORT_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = 4LL;
      v4 = PpmPerfSchedulerDirectedPerfStatesSupported != 0;
      v10 = 4LL;
      v5 = PpmPerfQosEnabled != 0;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      v9 = &PpmPerfQosDisableReasons;
      LOBYTE(v1) = EtwWrite(PpmEtwHandle, v2, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
