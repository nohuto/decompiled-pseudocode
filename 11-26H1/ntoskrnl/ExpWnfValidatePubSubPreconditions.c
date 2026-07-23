/*
 * XREFs of ExpWnfValidatePubSubPreconditions @ 0x14090DC10
 * Callers:
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall ExpWnfValidatePubSubPreconditions(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        NTSTATUS AccessStatus)
{
  unsigned int v5; // ebx
  _QWORD *v10; // rcx
  __int64 result; // rax
  void *v12; // r15
  __int64 v13; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF

  v5 = 0;
  if ( AccessStatus )
    goto LABEL_2;
  v12 = *(void **)(a2 + 16);
  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !DesiredAccess
    || (SeCaptureSubjectContext(&SubjectContext),
        SeAccessCheck(
          v12,
          &SubjectContext,
          0,
          DesiredAccess,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &GrantedAccess,
          &AccessStatus),
        SeReleaseSubjectContext(&SubjectContext),
        result = (unsigned int)AccessStatus,
        AccessStatus >= 0) )
  {
LABEL_2:
    v10 = *(_QWORD **)(a2 + 8);
    if ( !v10 )
      goto LABEL_3;
    if ( !a4 )
      return 3221225485LL;
    v13 = *v10 - *a4;
    if ( *v10 == *a4 )
      v13 = v10[1] - a4[1];
    if ( v13 )
    {
      return 3221225485LL;
    }
    else
    {
LABEL_3:
      if ( a3 > *(_DWORD *)a2 )
        return (unsigned int)-1073741811;
      return v5;
    }
  }
  return result;
}
