/*
 * XREFs of Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140B76650 (PopHeteroCapabilityDeepCopy.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140CDA674 (PpmInitHeteroEngine.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     Feature_WpsInitTableCollection__private_IsEnabledFallback @ 0x14060D408 (Feature_WpsInitTableCollection__private_IsEnabledFallback.c)
 */

__int64 Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WpsInitTableCollection__private_featureState & 0x10) != 0 )
    return Feature_WpsInitTableCollection__private_featureState & 1;
  else
    return Feature_WpsInitTableCollection__private_IsEnabledFallback(
             (unsigned int)Feature_WpsInitTableCollection__private_featureState,
             3LL);
}
