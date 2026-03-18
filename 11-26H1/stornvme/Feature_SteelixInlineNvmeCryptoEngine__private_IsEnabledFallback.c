/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140012214
 * Callers:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x1400121D8 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400144B8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SteelixInlineNvmeCryptoEngine__private_descriptor);
}
