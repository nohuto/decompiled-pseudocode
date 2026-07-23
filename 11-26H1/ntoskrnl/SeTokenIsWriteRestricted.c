/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1404866B0
 * Callers:
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A95C5C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
