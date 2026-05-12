/*
 * XREFs of Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback @ 0x1400E3254
 * Callers:
 *     Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline @ 0x1400E3218 (Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NativeNVMeCrashdumpByDefault__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NativeNVMeCrashdumpByDefault__private_descriptor);
}
