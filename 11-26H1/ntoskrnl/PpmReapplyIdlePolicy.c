/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140A9C8FC
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PpmInfoApplySettingUpdate @ 0x140A9C928 (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors(
           (__int64)&stru_140FC01F0.WaitRegister,
           (__int64)PpmApplyIdlePolicyChanges,
           0LL,
           0LL);
}
