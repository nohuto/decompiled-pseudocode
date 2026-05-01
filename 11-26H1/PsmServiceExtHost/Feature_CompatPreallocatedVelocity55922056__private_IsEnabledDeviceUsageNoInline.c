/*
 * XREFs of Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline @ 0x180093F2C
 * Callers:
 *     SdbpGetVelocityState @ 0x18009699C (SdbpGetVelocityState.c)
 * Callees:
 *     <none>
 */

__int64 Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922056__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922056__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922056__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922056__private_featureState,
             3LL);
}
