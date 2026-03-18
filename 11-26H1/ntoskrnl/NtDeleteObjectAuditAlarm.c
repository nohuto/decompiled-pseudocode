/*
 * XREFs of NtDeleteObjectAuditAlarm @ 0x140813DA0
 * Callers:
 *     DifNtDeleteObjectAuditAlarmWrapper @ 0x140675B30 (DifNtDeleteObjectAuditAlarmWrapper.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1409F71E8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1409F7320 (SeCheckAuditPrivilege.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // bl
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    LOBYTE(v6) = PreviousMode;
    if ( (unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v6) )
    {
      v7 = SepProbeAndCaptureString_U(SubsystemName, &P);
      if ( v7 >= 0 )
        SepAdtDeleteObjectAuditAlarm((int)P, 0LL, 0);
    }
    else
    {
      v7 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v8 = 3221225626LL;
    if ( v7 != -1073741670 )
      return v7;
  }
  else
  {
    v7 = -1073741700;
    v8 = 3221225596LL;
  }
  SepAuditFailed(v8);
  return v7;
}
