/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401D60EC
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x1401D6128 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 0x10) != 0 )
    return Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 1;
  else
    return Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(
             (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_featureState,
             3LL);
}
