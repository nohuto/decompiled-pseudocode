/*
 * XREFs of Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1402AF704
 * Callers:
 *     InitializeTouchPadSysParams @ 0x1402AF7B0 (InitializeTouchPadSysParams.c)
 * Callees:
 *     Feature_ExposePTPButtonSupport__private_IsEnabledFallback @ 0x1402AF73C (Feature_ExposePTPButtonSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExposePTPButtonSupport__private_featureState & 0x10) != 0 )
    return Feature_ExposePTPButtonSupport__private_featureState & 1;
  else
    return Feature_ExposePTPButtonSupport__private_IsEnabledFallback(
             (unsigned int)Feature_ExposePTPButtonSupport__private_featureState,
             3LL);
}
