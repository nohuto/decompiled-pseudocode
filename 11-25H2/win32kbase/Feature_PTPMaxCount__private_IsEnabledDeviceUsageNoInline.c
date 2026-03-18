/*
 * XREFs of Feature_PTPMaxCount__private_IsEnabledDeviceUsageNoInline @ 0x1401F187C
 * Callers:
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1400F0B20 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     Feature_PTPMaxCount__private_IsEnabledFallback @ 0x1401F18B4 (Feature_PTPMaxCount__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPMaxCount__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PTPMaxCount__private_featureState & 0x10) != 0 )
    return Feature_PTPMaxCount__private_featureState & 1;
  else
    return Feature_PTPMaxCount__private_IsEnabledFallback((unsigned int)Feature_PTPMaxCount__private_featureState, 3LL);
}
