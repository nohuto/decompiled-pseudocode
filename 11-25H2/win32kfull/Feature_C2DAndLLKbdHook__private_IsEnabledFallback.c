/*
 * XREFs of Feature_C2DAndLLKbdHook__private_IsEnabledFallback @ 0x14028B958
 * Callers:
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x14028B920 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_C2DAndLLKbdHook__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_C2DAndLLKbdHook__private_descriptor);
}
