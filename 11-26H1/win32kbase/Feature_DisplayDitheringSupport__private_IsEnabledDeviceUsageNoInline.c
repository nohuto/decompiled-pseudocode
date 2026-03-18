/*
 * XREFs of Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401E0388
 * Callers:
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FBFCC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 * Callees:
 *     Feature_DisplayDitheringSupport__private_IsEnabledFallback @ 0x1401E03C4 (Feature_DisplayDitheringSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayDitheringSupport__private_featureState & 0x10) != 0 )
    return Feature_DisplayDitheringSupport__private_featureState & 1;
  else
    return Feature_DisplayDitheringSupport__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayDitheringSupport__private_featureState,
             3LL);
}
