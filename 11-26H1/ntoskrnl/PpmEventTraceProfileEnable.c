/*
 * XREFs of PpmEventTraceProfileEnable @ 0x140AD86A4
 * Callers:
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileEnable(char a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  v2 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_PROFILE_ENABLED;
  if ( !a2 )
    v3 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 1LL;
      LOBYTE(v2) = EtwWrite(PpmEtwHandle, v3, 0LL, 1u, &UserData);
    }
  }
  return (char)v2;
}
