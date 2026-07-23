/*
 * XREFs of Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline @ 0x14060F418
 * Callers:
 *     PpmInitHeteroPolicy @ 0x140CDAA34 (PpmInitHeteroPolicy.c)
 * Callees:
 *     Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledFallback @ 0x14060F454 (Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WpsContaintmentDefaultDisabled__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WpsContaintmentDefaultDisabled__private_featureState & 1;
  else
    return Feature_Servicing_WpsContaintmentDefaultDisabled__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WpsContaintmentDefaultDisabled__private_featureState,
             3LL);
}
