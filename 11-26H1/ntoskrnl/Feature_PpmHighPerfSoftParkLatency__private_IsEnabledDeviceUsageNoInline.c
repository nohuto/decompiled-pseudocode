/*
 * XREFs of Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1402592B4
 * Callers:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback @ 0x14053144C (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmHighPerfSoftParkLatency__private_featureState & 0x10) != 0 )
    return Feature_PpmHighPerfSoftParkLatency__private_featureState & 1;
  else
    return Feature_PpmHighPerfSoftParkLatency__private_IsEnabledFallback(
             (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_featureState,
             3LL);
}
