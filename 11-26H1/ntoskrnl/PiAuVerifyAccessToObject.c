/*
 * XREFs of PiAuVerifyAccessToObject @ 0x140932170
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14099BC60 (PiPnpRtlIsDeviceEnumerableForUser.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PiAuVerifyAccessToObject(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN *a5)
{
  KPROCESSOR_MODE AccessMode; // al
  BOOLEAN *v10; // rbx
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessMode = 1;
  if ( !SecurityDescriptor )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  *a5 = 0;
  if ( !SubjectSecurityContext )
  {
    SeCaptureSubjectContext(&SubjectContext);
    AccessMode = KeGetCurrentThread()->PreviousMode;
  }
  p_SubjectContext = &SubjectContext;
  if ( SubjectSecurityContext )
    p_SubjectContext = SubjectSecurityContext;
  *v10 = SeAccessCheck(
           SecurityDescriptor,
           p_SubjectContext,
           0,
           DesiredAccess,
           0,
           0LL,
           GenericMapping,
           AccessMode,
           &GrantedAccess,
           &AccessStatus);
  if ( !SubjectSecurityContext )
    SeReleaseSubjectContext(&SubjectContext);
  if ( AccessStatus < 0 )
    *v10 = 0;
  return 0LL;
}
