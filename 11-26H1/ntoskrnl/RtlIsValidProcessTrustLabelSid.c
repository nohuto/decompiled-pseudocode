/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1402AC970
 * Callers:
 *     RtlpValidTrustSubjectContext @ 0x1402AC0BC (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SepReferenceTokenByHandle @ 0x1402AC430 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402AC7A0 (SepReconcileTrustSidWithProcessProtection.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     RtlAddAccessFilterAce @ 0x140803130 (RtlAddAccessFilterAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140926090 (RtlAddProcessTrustLabelAce.c)
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
