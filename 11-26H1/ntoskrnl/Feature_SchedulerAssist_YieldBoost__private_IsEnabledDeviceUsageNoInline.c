/*
 * XREFs of Feature_SchedulerAssist_YieldBoost__private_IsEnabledDeviceUsageNoInline @ 0x140526C58
 * Callers:
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 * Callees:
 *     Feature_SchedulerAssist_YieldBoost__private_IsEnabledFallback @ 0x140526C94 (Feature_SchedulerAssist_YieldBoost__private_IsEnabledFallback.c)
 */

__int64 Feature_SchedulerAssist_YieldBoost__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SchedulerAssist_YieldBoost__private_featureState & 0x10) != 0 )
    return Feature_SchedulerAssist_YieldBoost__private_featureState & 1;
  else
    return Feature_SchedulerAssist_YieldBoost__private_IsEnabledFallback(
             (unsigned int)Feature_SchedulerAssist_YieldBoost__private_featureState,
             3LL);
}
