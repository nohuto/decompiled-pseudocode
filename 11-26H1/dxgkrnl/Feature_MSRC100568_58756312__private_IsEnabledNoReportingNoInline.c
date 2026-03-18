/*
 * XREFs of Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline @ 0x1400807DC
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401F5444 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     Feature_MSRC100568_58756312__private_IsEnabledFallback @ 0x1400807C0 (Feature_MSRC100568_58756312__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC100568_58756312__private_featureState & 2) != 0 )
    return Feature_MSRC100568_58756312__private_featureState & 1;
  else
    return Feature_MSRC100568_58756312__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC100568_58756312__private_featureState,
             0);
}
