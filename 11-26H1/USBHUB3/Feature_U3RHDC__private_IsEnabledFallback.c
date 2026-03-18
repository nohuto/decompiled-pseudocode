/*
 * XREFs of Feature_U3RHDC__private_IsEnabledFallback @ 0x14000C9B8
 * Callers:
 *     Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline @ 0x14000C97C (Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140010680 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_U3RHDC__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_U3RHDC__private_descriptor);
}
