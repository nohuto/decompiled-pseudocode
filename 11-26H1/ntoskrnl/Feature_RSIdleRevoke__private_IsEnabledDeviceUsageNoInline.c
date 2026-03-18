/*
 * XREFs of Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline @ 0x14060B988
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     Feature_RSIdleRevoke__private_IsEnabledFallback @ 0x14060B9C4 (Feature_RSIdleRevoke__private_IsEnabledFallback.c)
 */

__int64 Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RSIdleRevoke__private_featureState & 0x10) != 0 )
    return Feature_RSIdleRevoke__private_featureState & 1;
  else
    return Feature_RSIdleRevoke__private_IsEnabledFallback(
             (unsigned int)Feature_RSIdleRevoke__private_featureState,
             3LL);
}
