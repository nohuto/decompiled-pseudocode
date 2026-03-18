/*
 * XREFs of Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledDeviceUsageNoInline @ 0x1401C1540
 * Callers:
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledFallback @ 0x1401C1578 (Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SpiSetStickyKeysSizeCheck__private_featureState & 0x10) != 0 )
    return Feature_SpiSetStickyKeysSizeCheck__private_featureState & 1;
  else
    return Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledFallback(
             (unsigned int)Feature_SpiSetStickyKeysSizeCheck__private_featureState,
             3LL);
}
