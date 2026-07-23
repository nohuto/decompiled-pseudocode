/*
 * XREFs of PpmEventTraceProfileChange @ 0x1409C19D8
 * Callers:
 *     PpmApplyProfile @ 0x1409C15D8 (PpmApplyProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProfileChange(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_CHANGE) )
    {
      UserData.Ptr = a1 + 8;
      *(_QWORD *)&UserData.Size = 1LL;
      v5 = a2 + 8;
      v6 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_CHANGE, 0LL, 2u, &UserData);
    }
  }
}
