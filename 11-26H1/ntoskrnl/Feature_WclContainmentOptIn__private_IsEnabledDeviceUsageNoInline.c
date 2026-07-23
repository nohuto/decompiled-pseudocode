/*
 * XREFs of Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline @ 0x140615ED0
 * Callers:
 *     PpmHeteroIsIntelCpuSupportedForContainment @ 0x140615F88 (PpmHeteroIsIntelCpuSupportedForContainment.c)
 * Callees:
 *     Feature_WclContainmentOptIn__private_IsEnabledFallback @ 0x140615F0C (Feature_WclContainmentOptIn__private_IsEnabledFallback.c)
 */

__int64 Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WclContainmentOptIn__private_featureState & 0x10) != 0 )
    return Feature_WclContainmentOptIn__private_featureState & 1;
  else
    return Feature_WclContainmentOptIn__private_IsEnabledFallback(
             (unsigned int)Feature_WclContainmentOptIn__private_featureState,
             3LL);
}
