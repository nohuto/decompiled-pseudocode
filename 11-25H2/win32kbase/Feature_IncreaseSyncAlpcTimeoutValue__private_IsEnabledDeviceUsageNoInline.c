/*
 * XREFs of Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledDeviceUsageNoInline @ 0x1401ABECC
 * Callers:
 *     ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x14019BAA4 (--0DispBrokerClient@DispBroker@@QEAA@XZ.c)
 * Callees:
 *     Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledFallback @ 0x1401ABF04 (Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledFallback.c)
 */

__int64 Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IncreaseSyncAlpcTimeoutValue__private_featureState & 0x10) != 0 )
    return Feature_IncreaseSyncAlpcTimeoutValue__private_featureState & 1;
  else
    return Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledFallback(
             (unsigned int)Feature_IncreaseSyncAlpcTimeoutValue__private_featureState,
             3LL);
}
