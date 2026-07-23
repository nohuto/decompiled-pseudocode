/*
 * XREFs of Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8
 * Callers:
 *     PpmHeteroDetectHgsCores @ 0x140516AD8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroGetWpsHardwareCapabilities @ 0x140516E88 (PpmHeteroGetWpsHardwareCapabilities.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 *     PpmHeteroReadWpsConfigurationFromPlatform @ 0x14060E690 (PpmHeteroReadWpsConfigurationFromPlatform.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x1407E8B10 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140CDD668 (PpmHeteroInitializeAmdWpsSupport.c)
 * Callees:
 *     Feature_ExtendedWpsTables__private_IsEnabledFallback @ 0x14060D2F4 (Feature_ExtendedWpsTables__private_IsEnabledFallback.c)
 */

__int64 Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExtendedWpsTables__private_featureState & 0x10) != 0 )
    return Feature_ExtendedWpsTables__private_featureState & 1;
  else
    return Feature_ExtendedWpsTables__private_IsEnabledFallback(
             (unsigned int)Feature_ExtendedWpsTables__private_featureState,
             3LL);
}
