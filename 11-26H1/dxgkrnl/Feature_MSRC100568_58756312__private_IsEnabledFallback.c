/*
 * XREFs of Feature_MSRC100568_58756312__private_IsEnabledFallback @ 0x1400807C0
 * Callers:
 *     Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline @ 0x1400807DC (Feature_MSRC100568_58756312__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MSRC100568_58756312__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MSRC100568_58756312__private_descriptor);
}
