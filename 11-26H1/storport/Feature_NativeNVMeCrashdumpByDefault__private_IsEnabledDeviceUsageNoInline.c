/*
 * XREFs of Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline @ 0x1400E3218
 * Callers:
 *     NvmeGetRegistrySettings @ 0x1400FEF44 (NvmeGetRegistrySettings.c)
 * Callees:
 *     Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback @ 0x1400E3254 (Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback.c)
 */

__int64 Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NativeNVMeCrashdumpByDefault__private_featureState & 0x10) != 0 )
    return Feature_NativeNVMeCrashdumpByDefault__private_featureState & 1;
  else
    return Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback(
             (unsigned int)Feature_NativeNVMeCrashdumpByDefault__private_featureState,
             3LL);
}
