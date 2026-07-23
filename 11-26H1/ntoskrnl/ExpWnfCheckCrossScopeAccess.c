/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  _QWORD *v3; // rdi
  void *v4; // rbx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *AccessStatus; // [rsp+80h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+18h] BYREF

  AccessStatus = 0LL;
  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
    goto LABEL_13;
  result = ExpWnfLookupPermanentName(a1, &AccessStatus);
  if ( (int)result < 0 )
    return result;
  v3 = AccessStatus;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(AccessStatus) = 0;
  v4 = (void *)v3[2];
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    v4,
    &SubjectContext,
    0,
    0x10u,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    (PNTSTATUS)&AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  ExFreePoolWithTag(v3, 0x20666E57u);
  result = (unsigned int)AccessStatus;
  if ( (int)AccessStatus >= 0 )
    return 0LL;
  if ( (_DWORD)AccessStatus == -1073741790 )
  {
LABEL_13:
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
    return 0LL;
  }
  return result;
}
