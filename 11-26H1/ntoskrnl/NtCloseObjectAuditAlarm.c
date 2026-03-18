/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x140A97170
 * Callers:
 *     DifNtCloseObjectAuditAlarmWrapper @ 0x14066EC50 (DifNtCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1409F71E8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1409F7320 (SeCheckAuditPrivilege.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // si
  NTSTATUS v7; // ebx
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
    v7 = SepProbeAndCaptureString_U((unsigned int *)&SubsystemName->Length, (__int64)&P);
    if ( v7 >= 0 )
      SepAdtCloseObjectAuditAlarm((unsigned __int16 *)P, (__int64)HandleId, &SubjectContext, 0LL, 0);
  }
  else
  {
    v7 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 == -1073741670 )
    SepAuditFailed(-1073741670);
  return v7;
}
