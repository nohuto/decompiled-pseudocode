/*
 * XREFs of Feature_QueueReadyThreadRecheckPriority__private_IsEnabledDeviceUsageNoInline @ 0x140529044
 * Callers:
 *     KiInitializeVelocity @ 0x140CD02B4 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_QueueReadyThreadRecheckPriority__private_IsEnabledFallback @ 0x140529080 (Feature_QueueReadyThreadRecheckPriority__private_IsEnabledFallback.c)
 */

__int64 Feature_QueueReadyThreadRecheckPriority__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_QueueReadyThreadRecheckPriority__private_featureState & 0x10) != 0 )
    return Feature_QueueReadyThreadRecheckPriority__private_featureState & 1;
  else
    return Feature_QueueReadyThreadRecheckPriority__private_IsEnabledFallback(
             (unsigned int)Feature_QueueReadyThreadRecheckPriority__private_featureState,
             3LL);
}
