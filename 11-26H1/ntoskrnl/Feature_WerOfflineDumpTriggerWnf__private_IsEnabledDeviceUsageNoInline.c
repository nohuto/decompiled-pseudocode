/*
 * XREFs of Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline @ 0x140607F34
 * Callers:
 *     PopDiagTraceAbnormalReset @ 0x140608034 (PopDiagTraceAbnormalReset.c)
 * Callees:
 *     Feature_WerOfflineDumpTriggerWnf__private_IsEnabledFallback @ 0x140607F70 (Feature_WerOfflineDumpTriggerWnf__private_IsEnabledFallback.c)
 */

__int64 Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WerOfflineDumpTriggerWnf__private_featureState & 0x10) != 0 )
    return Feature_WerOfflineDumpTriggerWnf__private_featureState & 1;
  else
    return Feature_WerOfflineDumpTriggerWnf__private_IsEnabledFallback(
             (unsigned int)Feature_WerOfflineDumpTriggerWnf__private_featureState,
             3LL);
}
