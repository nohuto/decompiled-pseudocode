/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x140A96858
 * Callers:
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  BOOLEAN result; // al
  unsigned __int8 *v5; // rbp
  bool v6; // si
  unsigned __int8 *v7; // rbp
  unsigned __int8 *v8; // rbp
  __int64 v9; // r9
  bool v10; // sf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 0x10) != 0
    || RtlIsMultiSessionSku() )
  {
    return 0;
  }
  v5 = (unsigned __int8 *)SeDefaultAccountAliasSid;
  v6 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SeDefaultAccountAliasSid, 0, 0, 0);
  if ( v6 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
    v6 = SepSidInToken(Token, 0LL, v5, 0, 1, 0);
  if ( HIDWORD(ExpPlatformBinaryLock.SwapListEntry.Next) && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v7 = (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid;
    if ( SepSidInToken(Token, 0LL, (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid, 0, 0, 0)
      && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v7, 0, 1, 0)) )
    {
      return 1;
    }
    if ( v6 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  if ( (v8 = (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid,
        SepSidInToken(Token, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0))
    && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v8, 0, 1, 0))
    || v6 )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(Token + 808, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid, 0, 1, 0);
  LOBYTE(v11) = result;
  if ( result )
  {
    v10 = (int)SepCheckCapabilities(
                 (PACCESS_TOKEN)Token,
                 *(_DWORD *)(a2 + 800),
                 *(_QWORD *)(a2 + 792),
                 v9,
                 (char *)&v11) < 0;
    result = v11;
    if ( !v10 && !(_BYTE)v11 )
      return RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
  }
  return result;
}
