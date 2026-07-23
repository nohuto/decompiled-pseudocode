/*
 * XREFs of Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline @ 0x1405F9EE8
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140256EE0 (KeIntSteerSnapPerf.c)
 * Callees:
 *     Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledFallback @ 0x1405F9F24 (Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_KeIntSteerProcessorIndex__private_featureState & 0x10) != 0 )
    return Feature_Servicing_KeIntSteerProcessorIndex__private_featureState & 1;
  else
    return Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_KeIntSteerProcessorIndex__private_featureState,
             3LL);
}
