/*
 * XREFs of Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline @ 0x1406122BC
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledFallback @ 0x1406122F8 (Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkMixedTopologyPolicyCandidateReset__private_featureState & 0x10) != 0 )
    return Feature_PpmParkMixedTopologyPolicyCandidateReset__private_featureState & 1;
  else
    return Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledFallback(
             (unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_featureState,
             3LL);
}
