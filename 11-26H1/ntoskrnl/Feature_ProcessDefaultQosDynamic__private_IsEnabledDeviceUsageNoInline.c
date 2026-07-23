/*
 * XREFs of Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405FBDB4
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     KeCalculateProcessDefaultQos @ 0x1405FBE10 (KeCalculateProcessDefaultQos.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B7D69C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 * Callees:
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback @ 0x1405FBDF0 (Feature_ProcessDefaultQosDynamic__private_IsEnabledFallback.c)
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
