/*
 * XREFs of Feature_DestroyCacheDCNoisyAssert__private_IsEnabledDeviceUsageNoInline @ 0x1401B6FD4
 * Callers:
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 * Callees:
 *     Feature_DestroyCacheDCNoisyAssert__private_IsEnabledFallback @ 0x1401B700C (Feature_DestroyCacheDCNoisyAssert__private_IsEnabledFallback.c)
 */

__int64 Feature_DestroyCacheDCNoisyAssert__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DestroyCacheDCNoisyAssert__private_featureState & 0x10) != 0 )
    return Feature_DestroyCacheDCNoisyAssert__private_featureState & 1;
  else
    return Feature_DestroyCacheDCNoisyAssert__private_IsEnabledFallback(
             (unsigned int)Feature_DestroyCacheDCNoisyAssert__private_featureState,
             3LL);
}
