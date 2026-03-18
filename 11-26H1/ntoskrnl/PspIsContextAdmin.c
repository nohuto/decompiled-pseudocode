/*
 * XREFs of PspIsContextAdmin @ 0x140958640
 * Callers:
 *     EtwQueryProcessTelemetryCoverage @ 0x14077429C (EtwQueryProcessTelemetryCoverage.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14095859C (PspSetEnergyTrackingStateJobTree.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0E008 (EtwSetProcessTelemetryCoverage.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140920530 (SeTokenIsAdmin.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 */

BOOLEAN PspIsContextAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
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
