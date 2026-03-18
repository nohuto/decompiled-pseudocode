/*
 * XREFs of Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14049B1AC
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledFallback @ 0x14060F110 (Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledFallback.c)
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
