/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14005C460
 * Callers:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SteelixInlineNvmeCryptoEngine__private_descriptor);
}
