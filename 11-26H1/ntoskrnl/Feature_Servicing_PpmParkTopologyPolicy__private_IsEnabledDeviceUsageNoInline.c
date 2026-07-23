/*
 * XREFs of Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140494CFC
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledFallback @ 0x140612374 (Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PpmParkTopologyPolicy__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PpmParkTopologyPolicy__private_featureState & 1;
  else
    return Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_featureState,
             3LL);
}
