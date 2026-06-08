/*
 * XREFs of Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline @ 0x140006AC0
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AA80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     Feature_QosHysteresisExperiment__private_IsEnabledFallback @ 0x140006AFC (Feature_QosHysteresisExperiment__private_IsEnabledFallback.c)
 */

__int64 Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_QosHysteresisExperiment__private_featureState & 0x10) != 0 )
    return Feature_QosHysteresisExperiment__private_featureState & 1;
  else
    return Feature_QosHysteresisExperiment__private_IsEnabledFallback(
             (unsigned int)Feature_QosHysteresisExperiment__private_featureState,
             3LL);
}
