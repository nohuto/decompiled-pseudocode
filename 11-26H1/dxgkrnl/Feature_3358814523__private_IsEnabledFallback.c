/*
 * XREFs of Feature_3358814523__private_IsEnabledFallback @ 0x140075AEC
 * Callers:
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x140075AB0 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3358814523__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_3358814523__private_descriptor);
}
