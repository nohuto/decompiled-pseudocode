/*
 * XREFs of PopOpenPowerKey @ 0x1404E1064
 * Callers:
 *     PoGetLightestSystemStateForEject @ 0x1407CBA68 (PoGetLightestSystemStateForEject.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407DB50C (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x1409F2B60 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140B246E0 (PopReadHiberbootPolicy.c)
 * Callees:
 *     PopOpenKey @ 0x1404E1080 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
