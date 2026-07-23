/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x140ACA3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PACCESS_TOKEN ClientToken; // rbx
  unsigned __int8 *SourceSid; // rbp
  char v6; // r14
  __int64 v11; // r8
  unsigned int v12; // r10d
  NTSTATUS ClientSecurity; // edi
  unsigned __int8 *v15; // rcx
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  ClientToken = SubjectContext->ClientToken;
  SourceSid = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObjectWithTag(ClientToken, 0x63436553u);
  if ( SubjectContext->ClientToken )
  {
    RtlSidDominatesForTrust(
      *((PSID *)SubjectContext->PrimaryToken + 138),
      *((PSID *)SubjectContext->ClientToken + 138),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      SourceSid = v15;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(v11) = ServerIsRemote;
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)ClientToken,
                     (__int64)ClientSecurityQos,
                     v11,
                     (struct _KLOCK_ENTRIES *)v12,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v6,
                     SourceSid,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObjectWithTag(ClientToken, 0x63436553u);
  return ClientSecurity;
}
