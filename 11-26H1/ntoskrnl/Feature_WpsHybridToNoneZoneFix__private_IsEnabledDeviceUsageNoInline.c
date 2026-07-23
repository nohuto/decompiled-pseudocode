/*
 * XREFs of Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline @ 0x14060D370
 * Callers:
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14060D428 (PpmHeteroHgsCalculateContainmentCount.c)
 * Callees:
 *     Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback @ 0x14060D3AC (Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback.c)
 */

__int64 Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WpsHybridToNoneZoneFix__private_featureState & 0x10) != 0 )
    return Feature_WpsHybridToNoneZoneFix__private_featureState & 1;
  else
    return Feature_WpsHybridToNoneZoneFix__private_IsEnabledFallback(
             (unsigned int)Feature_WpsHybridToNoneZoneFix__private_featureState,
             3LL);
}
