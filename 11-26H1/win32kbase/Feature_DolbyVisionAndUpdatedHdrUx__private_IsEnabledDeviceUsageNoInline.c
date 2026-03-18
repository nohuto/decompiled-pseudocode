/*
 * XREFs of Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401E03E0
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FBFCC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401E0030 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback @ 0x1401E041C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionAndUpdatedHdrUx__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionAndUpdatedHdrUx__private_featureState & 1;
  else
    return Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_featureState,
             3LL);
}
