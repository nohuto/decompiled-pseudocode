/*
 * XREFs of Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledFallback @ 0x1800758BC
 * Callers:
 *     Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline @ 0x180075888 (Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CRMDrivenIndexerNPUBackoff__private_descriptor);
}
