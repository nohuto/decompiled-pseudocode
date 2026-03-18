/*
 * XREFs of SeTokenIsRestricted @ 0x140461340
 * Callers:
 *     SeTokenIsAdmin @ 0x140920530 (SeTokenIsAdmin.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A9110C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A91D08 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
