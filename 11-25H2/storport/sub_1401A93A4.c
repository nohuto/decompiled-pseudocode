/*
 * XREFs of sub_1401A93A4 @ 0x1401A93A4
 * Callers:
 *     sub_14017E9A8 @ 0x14017E9A8 (sub_14017E9A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401A93A4(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  struct _GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  int AccessStatus; // [rsp+90h] [rbp+20h] BYREF
  DWORD GrantedAccess; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GrantedAccess = 0;
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  AccessStatus = -1073741790;
  GenericMapping = IoGetFileObjectGenericMapping();
  LOBYTE(a2) = SeAccessCheck(
                 *(PSECURITY_DESCRIPTOR *)(a1 + 272),
                 &SubjectContext,
                 1u,
                 2u,
                 0,
                 0LL,
                 GenericMapping,
                 *(_BYTE *)(a2 + 64),
                 &GrantedAccess,
                 &AccessStatus);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)a2 )
    return (unsigned int)AccessStatus;
  return v3;
}
