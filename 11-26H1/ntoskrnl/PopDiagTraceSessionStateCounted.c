/*
 * XREFs of PopDiagTraceSessionStateCounted @ 0x140B2EE88
 * Callers:
 *     PopEvaluateGlobalUserStatus @ 0x1409FA6E8 (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceSessionStateCounted(__int64 a1, __int64 a2, int a3)
{
  BOOLEAN result; // al
  int v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  int *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = a3;
  result = PopGlobalUserPresenceStateTransitions;
  v5 = PopGlobalUserPresenceStateTransitions;
  v4 = -1;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_GLOBAL_INPUT_STATE);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = &v11;
      v8 = 4LL;
      v9 = &v5;
      v10 = 4LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_ADPM_GLOBAL_INPUT_STATE, 0LL, 3u, &UserData);
    }
  }
  return result;
}
