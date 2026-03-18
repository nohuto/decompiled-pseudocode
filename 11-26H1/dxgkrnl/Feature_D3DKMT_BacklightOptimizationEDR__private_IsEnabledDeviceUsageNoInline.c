/*
 * XREFs of Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline @ 0x140091638
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024DB60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback @ 0x140091674 (Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback.c)
 */

__int64 Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_D3DKMT_BacklightOptimizationEDR__private_featureState & 0x10) != 0 )
    return Feature_D3DKMT_BacklightOptimizationEDR__private_featureState & 1;
  else
    return Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledFallback(
             (unsigned int)Feature_D3DKMT_BacklightOptimizationEDR__private_featureState,
             3LL);
}
