/*
 * XREFs of NormalizationList__Lookup @ 0x1406294A4
 * Callers:
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NormalizationList__Lookup(int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = SshpBlockerCollections.Padding[0];
  v2 = 0LL;
  if ( (unsigned __int64 *)SshpBlockerCollections.Padding[0] != SshpBlockerCollections.Padding )
  {
    while ( (unsigned __int64 *)v1 != SshpBlockerCollections.Padding )
    {
      if ( *(_DWORD *)(v1 + 16) == a1 )
        return v1 + 24;
      v1 = *(_QWORD *)v1;
    }
  }
  return v2;
}
