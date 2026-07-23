/*
 * XREFs of Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline @ 0x1405C25A4
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     Feature_OfflineDumpRedaction__private_IsEnabledFallback @ 0x1405C25E0 (Feature_OfflineDumpRedaction__private_IsEnabledFallback.c)
 */

__int64 Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_OfflineDumpRedaction__private_featureState & 0x10) != 0 )
    return Feature_OfflineDumpRedaction__private_featureState & 1;
  else
    return Feature_OfflineDumpRedaction__private_IsEnabledFallback(
             (unsigned int)Feature_OfflineDumpRedaction__private_featureState,
             3LL);
}
