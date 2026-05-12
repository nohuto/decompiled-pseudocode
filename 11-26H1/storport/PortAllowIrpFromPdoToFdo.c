/*
 * XREFs of PortAllowIrpFromPdoToFdo @ 0x1401B17A4
 * Callers:
 *     RaUnitStorageBreakReservationIoctl @ 0x14018B304 (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortAllowIrpFromPdoToFdo(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  void *v5; // rdi
  struct _GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  int AccessStatus; // [rsp+90h] [rbp+20h] BYREF
  DWORD GrantedAccess; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GrantedAccess = 0;
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  LOBYTE(a2) = *(_BYTE *)(a2 + 64);
  v5 = *(void **)(a1 + 272);
  AccessStatus = -1073741790;
  GenericMapping = IoGetFileObjectGenericMapping();
  LOBYTE(a2) = SeAccessCheck(v5, &SubjectContext, 1u, 2u, 0, 0LL, GenericMapping, a2, &GrantedAccess, &AccessStatus);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)a2 )
    return (unsigned int)AccessStatus;
  return v3;
}
