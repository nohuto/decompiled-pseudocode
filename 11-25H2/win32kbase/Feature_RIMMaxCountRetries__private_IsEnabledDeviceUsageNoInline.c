/*
 * XREFs of Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline @ 0x1401E20EC
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     Feature_RIMMaxCountRetries__private_IsEnabledFallback @ 0x1401E2124 (Feature_RIMMaxCountRetries__private_IsEnabledFallback.c)
 */

__int64 Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RIMMaxCountRetries__private_featureState & 0x10) != 0 )
    return Feature_RIMMaxCountRetries__private_featureState & 1;
  else
    return Feature_RIMMaxCountRetries__private_IsEnabledFallback(
             (unsigned int)Feature_RIMMaxCountRetries__private_featureState,
             3LL);
}
