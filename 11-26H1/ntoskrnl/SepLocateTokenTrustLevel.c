/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1402AC130
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409847D0 (SepAdjustAccessStateForConstraints.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A48B90 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A54920 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r10
  __int64 v5; // r11

  v2 = a1[2];
  if ( !*a1 )
    return *(_QWORD *)(v2 + 1104);
  v4 = *(_QWORD *)(*a1 + 1104LL);
  if ( *(_QWORD *)(v2 + 1104) && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(*(_QWORD *)(v2 + 1104), a2, v2) )
    return v5;
  if ( !v4 )
    return v4;
  if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, v2) )
  {
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 8) >= *(_DWORD *)(v4 + 8) && *(_DWORD *)(v5 + 12) >= *(_DWORD *)(v4 + 12) )
        return v4;
    }
    else if ( !*(_DWORD *)(v4 + 8) )
    {
      return v4;
    }
  }
  return v5;
}
