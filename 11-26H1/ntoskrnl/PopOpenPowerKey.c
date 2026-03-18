/*
 * XREFs of PopOpenPowerKey @ 0x1404E7CA4
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x1407C89C8 (PoGetLightestSystemStateForEject.c)
 *     PopResetCurrentPolicies @ 0x140943130 (PopResetCurrentPolicies.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x140A36FA8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140AF5348 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140B222E0 (PopReadHiberbootPolicy.c)
 * Callees:
 *     PopOpenKey @ 0x1404E7CC0 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
