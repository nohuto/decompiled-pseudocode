/*
 * XREFs of Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback @ 0x14004DD6C
 * Callers:
 *     Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline @ 0x14003F2CC (Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SystemCommitMdlLeakInstrumentation__private_descriptor);
}
