/*
 * XREFs of Feature_1251264824__private_IsEnabledDeviceUsageNoInline @ 0x14030F3D4
 * Callers:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 * Callees:
 *     Feature_1251264824__private_IsEnabledFallback @ 0x14030F40C (Feature_1251264824__private_IsEnabledFallback.c)
 */

__int64 Feature_1251264824__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1251264824__private_featureState & 0x10) != 0 )
    return Feature_1251264824__private_featureState & 1;
  else
    return Feature_1251264824__private_IsEnabledFallback((unsigned int)Feature_1251264824__private_featureState, 3LL);
}
