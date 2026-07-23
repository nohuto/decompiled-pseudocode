/*
 * XREFs of Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline @ 0x1405C89BC
 * Callers:
 *     PopDiagTraceAbnormalReset @ 0x14060ABE4 (PopDiagTraceAbnormalReset.c)
 *     IopInitializeOfflineCrashDump @ 0x140CC0704 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     Feature_WerOfflineDumpTriggerAlways__private_IsEnabledFallback @ 0x1405C89F8 (Feature_WerOfflineDumpTriggerAlways__private_IsEnabledFallback.c)
 */

__int64 Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WerOfflineDumpTriggerAlways__private_featureState & 0x10) != 0 )
    return Feature_WerOfflineDumpTriggerAlways__private_featureState & 1;
  else
    return Feature_WerOfflineDumpTriggerAlways__private_IsEnabledFallback(
             (unsigned int)Feature_WerOfflineDumpTriggerAlways__private_featureState,
             3LL);
}
