/*
 * XREFs of Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401A71E8
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     Feature_LearningModeSupport__private_IsEnabledFallback @ 0x1401A7220 (Feature_LearningModeSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LearningModeSupport__private_featureState & 0x10) != 0 )
    return Feature_LearningModeSupport__private_featureState & 1;
  else
    return Feature_LearningModeSupport__private_IsEnabledFallback(
             (unsigned int)Feature_LearningModeSupport__private_featureState,
             3LL);
}
