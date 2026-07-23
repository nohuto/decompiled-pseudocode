/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x180047B40
 * Callers:
 *     RtlSidDominatesForTrust @ 0x180047AB0 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180048170 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C5DC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidProcessTrustLabelSid(PSID Sid)
{
  int v1; // edx

  if ( *((_BYTE *)Sid + 1) != 2 || *(_BYTE *)Sid != 1 )
    return 0;
  v1 = *(_DWORD *)((char *)Sid + 2);
  if ( !v1 )
    v1 = *((unsigned __int16 *)Sid + 3) - 4864;
  if ( v1 )
    return 0;
  if ( *((_DWORD *)Sid + 2) )
    return 1;
  return *((_DWORD *)Sid + 3) == 0;
}
