/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x18005D5C0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x18005D530 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C8600 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x18013E170 (RtlAddAccessFilterAce.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  if ( v1 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) )
    return 1;
  return *(_DWORD *)(a1 + 12) == 0;
}
