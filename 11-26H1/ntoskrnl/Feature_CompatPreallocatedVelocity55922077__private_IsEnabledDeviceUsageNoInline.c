/*
 * XREFs of Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline @ 0x140718D50
 * Callers:
 *     SdbpGetVelocityState @ 0x14088AE20 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922077__private_IsEnabledFallback @ 0x140718D8C (Feature_CompatPreallocatedVelocity55922077__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922077__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922077__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922077__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922077__private_featureState,
             3LL);
}
