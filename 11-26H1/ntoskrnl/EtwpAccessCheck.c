/*
 * XREFs of EtwpAccessCheck @ 0x140931F90
 * Callers:
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 *     EtwpCheckGuidAccess @ 0x1409207F8 (EtwpCheckGuidAccess.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093B234 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( a3 )
  {
    p_SubjectSecurityContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    p_SubjectSecurityContext = &SubjectSecurityContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
