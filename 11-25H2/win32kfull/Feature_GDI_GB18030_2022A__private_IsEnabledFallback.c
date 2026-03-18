/*
 * XREFs of Feature_GDI_GB18030_2022A__private_IsEnabledFallback @ 0x14030E658
 * Callers:
 *     Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline @ 0x14030E620 (Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_GDI_GB18030_2022A__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_GDI_GB18030_2022A__private_descriptor);
}
