/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x1409490DC
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x14083F2A8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409481F0 (NtQueryWnfStateNameInformation.c)
 *     NtQueryWnfStateData @ 0x140949A90 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
