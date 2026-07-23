/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140AD8F94
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmInfoApplySettingUpdate @ 0x140AD873C (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors(
           (__int64)&stru_140FC11F0.WaitRegister,
           (__int64)PpmApplyIdlePolicyChanges,
           0LL,
           0LL);
}
