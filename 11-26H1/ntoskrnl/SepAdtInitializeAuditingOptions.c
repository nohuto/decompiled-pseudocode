/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140CE4BC0
 * Callers:
 *     SeRmInitPhase1 @ 0x140D1143C (SeRmInitPhase1.c)
 * Callees:
 *     SepAdtInitializeBounds @ 0x14081DFD8 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x14081E05C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14081E0BC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14081E11C (SepAdtOpenRegAndSetupNotification.c)
 *     AdtpInitializeAuditingCommon @ 0x140897138 (AdtpInitializeAuditingCommon.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtSetEvent @ 0x140A5BEF0 (NtSetEvent.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140B4E784 (SepAdtOpenEtwReadyEvent.c)
 */

NTSTATUS SepAdtInitializeAuditingOptions()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
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
