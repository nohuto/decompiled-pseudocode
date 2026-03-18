/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140CDE828
 * Callers:
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 * Callees:
 *     SepAdtInitializeBounds @ 0x140817DC8 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140817E4C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140817EAC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140817F0C (SepAdtOpenRegAndSetupNotification.c)
 *     AdtpInitializeAuditingCommon @ 0x140890D3C (AdtpInitializeAuditingCommon.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtSetEvent @ 0x140A52C00 (NtSetEvent.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140B4C9F4 (SepAdtOpenEtwReadyEvent.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  int v1; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(Handle);
      NtClose(Handle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
