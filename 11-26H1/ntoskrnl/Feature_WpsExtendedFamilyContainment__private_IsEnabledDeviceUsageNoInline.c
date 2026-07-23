/*
 * XREFs of Feature_WpsExtendedFamilyContainment__private_IsEnabledDeviceUsageNoInline @ 0x140615F2C
 * Callers:
 *     PpmHeteroIsIntelCpuSupportedForContainment @ 0x140615F88 (PpmHeteroIsIntelCpuSupportedForContainment.c)
 * Callees:
 *     Feature_WpsExtendedFamilyContainment__private_IsEnabledFallback @ 0x140615F68 (Feature_WpsExtendedFamilyContainment__private_IsEnabledFallback.c)
 */

__int64 Feature_WpsExtendedFamilyContainment__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WpsExtendedFamilyContainment__private_featureState & 0x10) != 0 )
    return Feature_WpsExtendedFamilyContainment__private_featureState & 1;
  else
    return Feature_WpsExtendedFamilyContainment__private_IsEnabledFallback(
             (unsigned int)Feature_WpsExtendedFamilyContainment__private_featureState,
             3LL);
}
