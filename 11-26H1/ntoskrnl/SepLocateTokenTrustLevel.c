/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1403AB850
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409467E0 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A51E80 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A5DC10 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 */

_DWORD *__fastcall SepLocateTokenTrustLevel(_QWORD *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r10
  __int64 v4; // r11

  v1 = a1[2];
  if ( !*a1 )
    return *(_DWORD **)(v1 + 1104);
  v3 = *(_DWORD **)(*a1 + 1104LL);
  if ( *(_QWORD *)(v1 + 1104) && !RtlIsValidProcessTrustLabelSid(*(PSID *)(v1 + 1104)) )
    return (_DWORD *)v4;
  if ( !v3 )
    return v3;
  if ( RtlIsValidProcessTrustLabelSid(v3) )
  {
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) >= v3[2] && *(_DWORD *)(v4 + 12) >= v3[3] )
        return v3;
    }
    else if ( !v3[2] )
    {
      return v3;
    }
  }
  return (_DWORD *)v4;
}
