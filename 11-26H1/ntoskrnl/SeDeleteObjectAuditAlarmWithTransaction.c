/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409FA110
 * Callers:
 *     SeDeleteObjectAuditAlarm @ 0x1409FA0F0 (SeDeleteObjectAuditAlarm.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140B019A0 (NtMakeTemporaryObject.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm((int)&SeSubsystemName, (__int64)TransactionId, 1);
  SeReleaseSubjectContext(&SubjectContext);
}
