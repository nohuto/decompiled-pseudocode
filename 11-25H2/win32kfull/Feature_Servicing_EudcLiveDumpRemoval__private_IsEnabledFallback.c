/*
 * XREFs of Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback @ 0x14030E6AC
 * Callers:
 *     Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline @ 0x14030E674 (Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_EudcLiveDumpRemoval__private_descriptor);
}
