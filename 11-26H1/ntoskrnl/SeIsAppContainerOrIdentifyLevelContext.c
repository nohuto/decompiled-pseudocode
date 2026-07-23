/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x140933444
 * Callers:
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  char v2; // si
  struct _SECURITY_SUBJECT_CONTEXT *v4; // rdi
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT v7; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  v2 = 0;
  GrantedAccess = 0;
  *a2 = 1;
  v4 = SubjectContext;
  memset(&v7, 0, sizeof(v7));
  if ( !SubjectContext )
  {
    SeCaptureSubjectContext(&v7);
    v4 = &v7;
    v2 = 1;
  }
  if ( SeAccessCheck(
         (PSECURITY_DESCRIPTOR)PspSiloMonitorLock.UserWaitTime,
         v4,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( v2 )
    SeReleaseSubjectContext(v4);
  return v5;
}
