/*
 * XREFs of Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline @ 0x14058C0A0
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C (HalpDmaGetReservedRegionsForDeviceResources.c)
 * Callees:
 *     Feature_DmaReservedRegionsPdoReference__private_IsEnabledFallback @ 0x14058C0DC (Feature_DmaReservedRegionsPdoReference__private_IsEnabledFallback.c)
 */

__int64 Feature_DmaReservedRegionsPdoReference__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DmaReservedRegionsPdoReference__private_featureState & 0x10) != 0 )
    return Feature_DmaReservedRegionsPdoReference__private_featureState & 1;
  else
    return Feature_DmaReservedRegionsPdoReference__private_IsEnabledFallback(
             (unsigned int)Feature_DmaReservedRegionsPdoReference__private_featureState,
             3LL);
}
