/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x14091ED10
 * Callers:
 *     SeDeleteObjectAuditAlarm @ 0x14091ECF0 (SeDeleteObjectAuditAlarm.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140B036D0 (NtMakeTemporaryObject.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm((int)&SeSubsystemName, (__int64)TransactionId, 1);
  SeReleaseSubjectContext(&SubjectContext);
}
