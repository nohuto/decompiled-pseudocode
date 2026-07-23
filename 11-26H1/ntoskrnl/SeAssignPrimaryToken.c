/*
 * XREFs of SeAssignPrimaryToken @ 0x140A7BF34
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     SepAuditingForSubCategory @ 0x1404BB95C (SepAuditingForSubCategory.c)
 *     SepAuditAssignPrimaryToken @ 0x140819088 (SepAuditAssignPrimaryToken.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 *     SeDeassignPrimaryToken @ 0x140A7C400 (SeDeassignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  char v4; // al
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v4 = SepAuditingForSubCategory(134, 1);
  v8 = v4;
  if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[96] )
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
