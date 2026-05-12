/*
 * XREFs of Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledDeviceUsageNoInline @ 0x140072308
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 * Callees:
 *     Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledFallback @ 0x140072344 (Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledFallback.c)
 */

__int64 Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NativeNVMeStackEnableForClientOS__private_featureState & 0x10) != 0 )
    return Feature_NativeNVMeStackEnableForClientOS__private_featureState & 1;
  else
    return Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledFallback(
             (unsigned int)Feature_NativeNVMeStackEnableForClientOS__private_featureState,
             3LL);
}
