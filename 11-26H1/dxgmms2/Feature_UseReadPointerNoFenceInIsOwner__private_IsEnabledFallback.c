/*
 * XREFs of Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback @ 0x14004DDC4
 * Callers:
 *     Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline @ 0x14004DD88 (Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UseReadPointerNoFenceInIsOwner__private_descriptor);
}
