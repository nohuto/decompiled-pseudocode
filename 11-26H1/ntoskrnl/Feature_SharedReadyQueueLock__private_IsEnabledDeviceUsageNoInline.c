/*
 * XREFs of Feature_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x140526A30
 * Callers:
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 * Callees:
 *     Feature_SharedReadyQueueLock__private_IsEnabledFallback @ 0x140526A6C (Feature_SharedReadyQueueLock__private_IsEnabledFallback.c)
 */

__int64 Feature_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SharedReadyQueueLock__private_featureState & 0x10) != 0 )
    return Feature_SharedReadyQueueLock__private_featureState & 1;
  else
    return Feature_SharedReadyQueueLock__private_IsEnabledFallback(
             (unsigned int)Feature_SharedReadyQueueLock__private_featureState,
             3LL);
}
