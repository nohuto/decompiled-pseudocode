/*
 * XREFs of Feature_SharedUserCritAndUIPI__private_IsEnabledFallback @ 0x140272288
 * Callers:
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x140272250 (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SharedUserCritAndUIPI__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SharedUserCritAndUIPI__private_descriptor);
}
