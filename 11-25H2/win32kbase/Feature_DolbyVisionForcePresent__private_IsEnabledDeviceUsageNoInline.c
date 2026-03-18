/*
 * XREFs of Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401B0D50
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1401B0D88 (Feature_DolbyVisionForcePresent__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionForcePresent__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionForcePresent__private_featureState & 1;
  else
    return Feature_DolbyVisionForcePresent__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionForcePresent__private_featureState,
             3LL);
}
