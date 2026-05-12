/*
 * XREFs of RaidCallerIsAdmin @ 0x1400931F8
 * Callers:
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x14009BD04 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x1400A5FE4 (RaUnitUnlockContiguousPhysicalPagesIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x14018BB30 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN RaidCallerIsAdmin()
{
  void *PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
