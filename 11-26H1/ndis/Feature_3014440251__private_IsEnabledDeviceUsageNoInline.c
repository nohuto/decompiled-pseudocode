/*
 * XREFs of Feature_3014440251__private_IsEnabledDeviceUsageNoInline @ 0x1400A606C
 * Callers:
 *     ndisValidateEmbeddedBufferBounds @ 0x14013C094 (ndisValidateEmbeddedBufferBounds.c)
 * Callees:
 *     Feature_3014440251__private_IsEnabledFallback @ 0x1400A60A8 (Feature_3014440251__private_IsEnabledFallback.c)
 */

__int64 Feature_3014440251__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3014440251__private_featureState & 0x10) != 0 )
    return Feature_3014440251__private_featureState & 1;
  else
    return Feature_3014440251__private_IsEnabledFallback((unsigned int)Feature_3014440251__private_featureState, 3LL);
}
