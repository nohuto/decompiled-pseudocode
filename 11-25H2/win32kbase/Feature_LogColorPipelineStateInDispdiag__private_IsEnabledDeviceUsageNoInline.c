/*
 * XREFs of Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline @ 0x1401B9CF4
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E3DC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 * Callees:
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback @ 0x1401B9D2C (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback.c)
 */

__int64 Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LogColorPipelineStateInDispdiag__private_featureState & 0x10) != 0 )
    return Feature_LogColorPipelineStateInDispdiag__private_featureState & 1;
  else
    return Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback(
             (unsigned int)Feature_LogColorPipelineStateInDispdiag__private_featureState,
             3LL);
}
