/*
 * XREFs of Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback @ 0x14006F920
 * Callers:
 *     Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline @ 0x14006F8E4 (Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UseReadPointerNoFenceInIsOwner__private_descriptor);
}
