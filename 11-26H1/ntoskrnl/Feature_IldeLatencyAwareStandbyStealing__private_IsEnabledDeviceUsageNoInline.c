/*
 * XREFs of Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405E94C4
 * Callers:
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 * Callees:
 *     Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback @ 0x1405E9500 (Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback.c)
 */

__int64 Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IldeLatencyAwareStandbyStealing__private_featureState & 0x10) != 0 )
    return Feature_IldeLatencyAwareStandbyStealing__private_featureState & 1;
  else
    return Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback(
             (unsigned int)Feature_IldeLatencyAwareStandbyStealing__private_featureState,
             3LL);
}
