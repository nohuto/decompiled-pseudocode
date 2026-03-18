/*
 * XREFs of RtlIsSandboxedToken @ 0x1408F4B90
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x140454DB0 (IopCheckInitiatorHint.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     CmpCheckCreateAccess @ 0x14098391C (CmpCheckCreateAccess.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     ObCreateSymbolicLink @ 0x140AB5768 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140AF9E70 (ObpCreateDirectoryObject.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
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
  if ( SeQueryInformationToken(ClientToken, MaxTokenInfoClass, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
