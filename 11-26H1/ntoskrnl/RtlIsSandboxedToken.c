/*
 * XREFs of RtlIsSandboxedToken @ 0x1408FBA10
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x14044CEE0 (IopCheckInitiatorHint.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     CmpCheckCreateAccess @ 0x14094592C (CmpCheckCreateAccess.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140AFC300 (ObpCreateDirectoryObject.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  bool v2; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LOBYTE(TokenInformation) = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !a2 )
    return 0;
  if ( !SubjectContext )
  {
    p_SubjectContexta = &SubjectContexta;
    SeCaptureSubjectContext(&SubjectContexta);
  }
  ClientToken = p_SubjectContexta->ClientToken;
  if ( !p_SubjectContexta->ClientToken )
    ClientToken = p_SubjectContexta->PrimaryToken;
  if ( SeQueryInformationToken(ClientToken, TokenIsSandboxed, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
