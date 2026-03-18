/*
 * XREFs of Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405F9394
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x14051C2E4 (PspSetProcessPriorityByClass.c)
 *     KeCalculateProcessDefaultQos @ 0x1405F93F0 (KeCalculateProcessDefaultQos.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B77F8C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 * Callees:
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback @ 0x1405F93D0 (Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback.c)
 */

__int64 Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ProcessDefaultQosDynamic__private_featureState & 0x10) != 0 )
    return Feature_ProcessDefaultQosDynamic__private_featureState & 1;
  else
    return Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback(
             (unsigned int)Feature_ProcessDefaultQosDynamic__private_featureState,
             3LL);
}
