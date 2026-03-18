/*
 * XREFs of Feature_LetOOBEHotKeyBE__private_IsEnabledFallback @ 0x14028BA00
 * Callers:
 *     Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline @ 0x14028B9C8 (Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LetOOBEHotKeyBE__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_LetOOBEHotKeyBE__private_descriptor);
}
