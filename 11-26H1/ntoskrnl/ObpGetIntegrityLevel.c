/*
 * XREFs of ObpGetIntegrityLevel @ 0x140AB6F0C
 * Callers:
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall ObpGetIntegrityLevel(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2, PVOID *a3)
{
  NTSTATUS InformationToken; // esi
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF

  InformationToken = 0;
  *(_DWORD *)a3 = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( a2 )
  {
    if ( !SubjectContext )
    {
      p_SubjectContexta = &SubjectContexta;
      SeCaptureSubjectContext(&SubjectContexta);
    }
    ClientToken = p_SubjectContexta->ClientToken;
    if ( !p_SubjectContexta->ClientToken )
      ClientToken = p_SubjectContexta->PrimaryToken;
    InformationToken = SeQueryInformationToken(ClientToken, TokenIntegrityLevel, a3);
    if ( InformationToken < 0 )
      *(_DWORD *)a3 = 0;
    if ( p_SubjectContexta == &SubjectContexta )
      SeReleaseSubjectContext(p_SubjectContexta);
  }
  else
  {
    *(_DWORD *)a3 = 20480;
  }
  return (unsigned int)InformationToken;
}
