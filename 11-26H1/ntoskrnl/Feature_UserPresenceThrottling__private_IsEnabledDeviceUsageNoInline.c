/*
 * XREFs of Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x140455510
 * Callers:
 *     KiComputeThreadQos @ 0x1402BC220 (KiComputeThreadQos.c)
 *     PsComputeProcessPpmPolicy @ 0x140614E6C (PsComputeProcessPpmPolicy.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledFallback @ 0x140532F3C (Feature_UserPresenceThrottling__private_IsEnabledFallback.c)
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
