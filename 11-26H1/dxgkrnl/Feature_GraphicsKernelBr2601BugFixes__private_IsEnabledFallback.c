/*
 * XREFs of Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledFallback @ 0x1400807A4
 * Callers:
 *     Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x140080768 (Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_GraphicsKernelBr2601BugFixes__private_descriptor);
}
