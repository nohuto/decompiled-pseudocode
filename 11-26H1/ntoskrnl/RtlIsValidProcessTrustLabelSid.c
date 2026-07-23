/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddAccessFilterAce @ 0x140808BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
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
