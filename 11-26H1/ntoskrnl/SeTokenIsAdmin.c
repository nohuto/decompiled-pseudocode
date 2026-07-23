/*
 * XREFs of SeTokenIsAdmin @ 0x1409238F0
 * Callers:
 *     IoComputeRedirectionTrustLevel @ 0x1404E1F30 (IoComputeRedirectionTrustLevel.c)
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
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
