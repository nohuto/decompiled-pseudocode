/*
 * XREFs of Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405315E4
 * Callers:
 *     PpmIdleSelectStates @ 0x1403EA21C (PpmIdleSelectStates.c)
 *     PpmEstimateIdleDuration @ 0x1404FC2AC (PpmEstimateIdleDuration.c)
 * Callees:
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledFallback @ 0x14052F8C8 (Feature_PpmDynamicHintAdjust__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PpmDynamicHintAdjust__private_featureState & 2) != 0 )
    return Feature_PpmDynamicHintAdjust__private_featureState & 1;
  else
    return Feature_PpmDynamicHintAdjust__private_IsEnabledFallback(
             (unsigned int)Feature_PpmDynamicHintAdjust__private_featureState,
             0);
}
