/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x140A9B2F0
 * Callers:
 *     DifNtCloseObjectAuditAlarmWrapper @ 0x140672830 (DifNtCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140A5FD38 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // si
  NTSTATUS v6; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v6 = SepProbeAndCaptureString_U((unsigned int *)&SubsystemName->Length, (__int64)&P);
    if ( v6 >= 0 )
      SepAdtCloseObjectAuditAlarm((int)P, 0);
  }
  else
  {
    v6 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v6 == -1073741670 )
    SepAuditFailed(-1073741670);
  return v6;
}
