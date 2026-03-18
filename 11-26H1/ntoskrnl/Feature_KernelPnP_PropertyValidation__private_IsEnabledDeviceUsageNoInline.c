/*
 * XREFs of Feature_KernelPnP_PropertyValidation__private_IsEnabledDeviceUsageNoInline @ 0x1407198FC
 * Callers:
 *     _PnpValidatePropertyData @ 0x1409DC3B4 (_PnpValidatePropertyData.c)
 * Callees:
 *     Feature_KernelPnP_PropertyValidation__private_IsEnabledFallback @ 0x140719938 (Feature_KernelPnP_PropertyValidation__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_PropertyValidation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_PropertyValidation__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_PropertyValidation__private_featureState & 1;
  else
    return Feature_KernelPnP_PropertyValidation__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_PropertyValidation__private_featureState,
             3LL);
}
