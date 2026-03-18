/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1402AC0BC
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A5DD80 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v7; // r10
  __int64 v8; // r11

  LOBYTE(a3) = 0;
  if ( !a1 || !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3) )
    goto LABEL_6;
  if ( !v5 )
    goto LABEL_4;
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v5, v4, a3) )
    goto LABEL_6;
  if ( *(_DWORD *)(v8 + 8) >= *(_DWORD *)(v7 + 8) && *(_DWORD *)(v8 + 12) >= *(_DWORD *)(v7 + 12) )
LABEL_4:
    LOBYTE(a3) = 1;
  *a4 = 0;
  if ( !(_BYTE)a3 )
LABEL_6:
    *a4 = -1073741790;
  return a3;
}
