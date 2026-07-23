/*
 * XREFs of SeCreateClientSecurityFromSubjectContextEx @ 0x14063E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 */

__int64 __fastcall SeCreateClientSecurityFromSubjectContextEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  void *SourceSid; // rbp
  char v6; // r14
  void *v9; // rcx
  int ClientSecurity; // edi
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+8h] BYREF

  v4 = *(void **)a1;
  SourceSid = 0LL;
  v6 = 0;
  DominatesTrust = 0;
  if ( !v4 )
    v4 = *(void **)(a1 + 16);
  ObfReferenceObjectWithTag(v4, 0x63436553u);
  if ( *(_QWORD *)a1 )
  {
    RtlSidDominatesForTrust(
      *(PSID *)(*(_QWORD *)(a1 + 16) + 1104LL),
      *(PSID *)(*(_QWORD *)a1 + 1104LL),
      &DominatesTrust);
    if ( !DominatesTrust )
    {
      v6 = 1;
      SourceSid = v9;
    }
  }
  ClientSecurity = SepCreateClientSecurityEx((int)v4, 0, *(_DWORD *)(a1 + 8), 1, 0LL, v6, SourceSid, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
    ObfDereferenceObjectWithTag(v4, 0x63436553u);
  return (unsigned int)ClientSecurity;
}
