/*
 * XREFs of Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405DF3D4
 * Callers:
 *     PiCMCaptureDeviceListInputData @ 0x140AA1F70 (PiCMCaptureDeviceListInputData.c)
 * Callees:
 *     Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledFallback @ 0x1405DF410 (Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_DeviceListFilterUpdates__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_DeviceListFilterUpdates__private_featureState & 1;
  else
    return Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_DeviceListFilterUpdates__private_featureState,
             3LL);
}
