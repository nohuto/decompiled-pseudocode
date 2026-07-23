/*
 * XREFs of Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140461530
 * Callers:
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KeCalculateProcessDefaultQos @ 0x1405FBE10 (KeCalculateProcessDefaultQos.c)
 * Callees:
 *     Feature_DisableSystemThreadsQosPolicy__private_IsEnabledFallback @ 0x1405F8C6C (Feature_DisableSystemThreadsQosPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableSystemThreadsQosPolicy__private_featureState & 0x10) != 0 )
    return Feature_DisableSystemThreadsQosPolicy__private_featureState & 1;
  else
    return Feature_DisableSystemThreadsQosPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_DisableSystemThreadsQosPolicy__private_featureState,
             3LL);
}
