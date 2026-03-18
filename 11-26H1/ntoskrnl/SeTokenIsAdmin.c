/*
 * XREFs of SeTokenIsAdmin @ 0x140920530
 * Callers:
 *     IoComputeRedirectionTrustLevel @ 0x1404E8B70 (IoComputeRedirectionTrustLevel.c)
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 * Callees:
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140461340 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  unsigned __int8 *v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = (unsigned __int8 *)SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)SeAliasAdminsSid, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0);
  }
  return v3;
}
