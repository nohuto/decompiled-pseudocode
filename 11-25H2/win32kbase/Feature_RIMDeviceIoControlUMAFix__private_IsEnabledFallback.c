/*
 * XREFs of Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback @ 0x1401D7B48
 * Callers:
 *     Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B10 (Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RIMDeviceIoControlUMAFix__private_descriptor);
}
