/*
 * XREFs of Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x14044D640
 * Callers:
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     PsComputeProcessPpmPolicy @ 0x140617D08 (PsComputeProcessPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledFallback @ 0x1405353B8 (Feature_UserPresenceThrottling__private_IsEnabledFallback.c)
 */

__int64 Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserPresenceThrottling__private_featureState & 0x10) != 0 )
    return Feature_UserPresenceThrottling__private_featureState & 1;
  else
    return Feature_UserPresenceThrottling__private_IsEnabledFallback(
             (unsigned int)Feature_UserPresenceThrottling__private_featureState,
             3LL);
}
