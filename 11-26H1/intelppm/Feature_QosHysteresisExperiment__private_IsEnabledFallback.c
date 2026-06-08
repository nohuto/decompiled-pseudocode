/*
 * XREFs of Feature_QosHysteresisExperiment__private_IsEnabledFallback @ 0x140006AFC
 * Callers:
 *     Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline @ 0x140006AC0 (Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400057B8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_QosHysteresisExperiment__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_QosHysteresisExperiment__private_descriptor);
}
