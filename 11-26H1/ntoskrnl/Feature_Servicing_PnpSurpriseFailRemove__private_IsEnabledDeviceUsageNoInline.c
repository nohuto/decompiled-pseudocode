/*
 * XREFs of Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledDeviceUsageNoInline @ 0x1405DB524
 * Callers:
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409B79A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 * Callees:
 *     Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledFallback @ 0x1405DB560 (Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PnpSurpriseFailRemove__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PnpSurpriseFailRemove__private_featureState & 1;
  else
    return Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PnpSurpriseFailRemove__private_featureState,
             3LL);
}
