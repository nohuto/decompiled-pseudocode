/*
 * XREFs of Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x140589D58
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050B0EC (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpGetIommuInterfaceEx @ 0x140789350 (HalpGetIommuInterfaceEx.c)
 *     IommuDeviceDelete @ 0x1407897F0 (IommuDeviceDelete.c)
 * Callees:
 *     Feature_IommuInterfacePointerReset__private_IsEnabledFallback @ 0x140589D94 (Feature_IommuInterfacePointerReset__private_IsEnabledFallback.c)
 */

__int64 Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IommuInterfacePointerReset__private_featureState & 0x10) != 0 )
    return Feature_IommuInterfacePointerReset__private_featureState & 1;
  else
    return Feature_IommuInterfacePointerReset__private_IsEnabledFallback(
             (unsigned int)Feature_IommuInterfacePointerReset__private_featureState,
             3LL);
}
