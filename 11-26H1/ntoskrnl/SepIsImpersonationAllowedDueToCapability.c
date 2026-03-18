/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x140A91D08
 * Callers:
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     SeTokenIsRestricted @ 0x140461340 (SeTokenIsRestricted.c)
 *     SepCheckCapabilities @ 0x140814DD4 (SepCheckCapabilities.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  BOOLEAN result; // al
  unsigned __int8 *Spare32; // rbp
  bool v6; // si
  unsigned __int8 *v7; // rbp
  unsigned __int8 *SchedulerSharedSwappablePage; // rbp
  __int64 v9; // r9
  bool v10; // sf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 0x10) != 0
    || (unsigned __int8)RtlIsMultiSessionSku(Token, a2) )
  {
    return 0;
  }
  Spare32 = (unsigned __int8 *)SepRmCapTableLock.Spare32;
  v6 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SepRmCapTableLock.Spare32, 0, 0, 0);
  if ( v6 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
    v6 = SepSidInToken(Token, 0LL, Spare32, 0, 1, 0);
  if ( HIDWORD(ExpPlatformBinaryLock.SwapListEntry.Next) && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v7 = *(unsigned __int8 **)&SepRmCapTableLock.SchedulerAssistYieldCounter;
    if ( SepSidInToken(Token, 0LL, *(unsigned __int8 **)&SepRmCapTableLock.SchedulerAssistYieldCounter, 0, 0, 0)
      && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v7, 0, 1, 0)) )
    {
      return 1;
    }
    if ( v6 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  if ( (SchedulerSharedSwappablePage = (unsigned __int8 *)SepRmCapTableLock.SchedulerSharedSwappablePage,
        SepSidInToken(Token, 0LL, (unsigned __int8 *)SepRmCapTableLock.SchedulerSharedSwappablePage, 0, 0, 0))
    && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, SchedulerSharedSwappablePage, 0, 1, 0))
    || v6 )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(Token + 808, 0LL, (unsigned __int8 *)SepRmCapTableLock.AutoBoostThreadState, 0, 1, 0);
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
