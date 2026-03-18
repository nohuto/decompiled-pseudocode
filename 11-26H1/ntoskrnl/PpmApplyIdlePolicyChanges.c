/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1403E62E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x1403E6300 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 34880);
  return 0LL;
}
