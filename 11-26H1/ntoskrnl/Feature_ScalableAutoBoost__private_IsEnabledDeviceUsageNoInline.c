/*
 * XREFs of Feature_ScalableAutoBoost__private_IsEnabledDeviceUsageNoInline @ 0x1405F734C
 * Callers:
 *     KeAbInitialize @ 0x1405F73D0 (KeAbInitialize.c)
 * Callees:
 *     Feature_ScalableAutoBoost__private_IsEnabledFallback @ 0x1405F7388 (Feature_ScalableAutoBoost__private_IsEnabledFallback.c)
 */

__int64 Feature_ScalableAutoBoost__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ScalableAutoBoost__private_featureState & 0x10) != 0 )
    return Feature_ScalableAutoBoost__private_featureState & 1;
  else
    return Feature_ScalableAutoBoost__private_IsEnabledFallback(
             (unsigned int)Feature_ScalableAutoBoost__private_featureState,
             3LL);
}
