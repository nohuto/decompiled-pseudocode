/*
 * XREFs of SeAssignPrimaryToken @ 0x140A2C3D0
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     SepAuditingForSubCategory @ 0x1404C210C (SepAuditingForSubCategory.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140813628 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ObInitializeFastReference @ 0x140A2BC10 (ObInitializeFastReference.c)
 *     SeDeassignPrimaryToken @ 0x140A2DF94 (SeDeassignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  char v4; // al
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v4 = SepAuditingForSubCategory(134, 1);
  v8 = v4;
  if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[64] )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SepAdtIncorporatePerUserPolicy(0x22u, 1, 0, (__int64)PrimaryToken, &v8);
    SeReleaseSubjectContext(&SubjectContext);
    v4 = v8;
  }
  if ( v4 )
    SepAuditAssignPrimaryToken(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 584) )
    SeDeassignPrimaryToken(a1);
  PsReferenceSiloContext(a2);
  a2[204] = 1;
  return ObInitializeFastReference((__int64 *)(a1 + 584), (__int64)a2);
}
