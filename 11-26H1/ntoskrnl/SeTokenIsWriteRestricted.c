/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14048CB70
 * Callers:
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A9110C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
