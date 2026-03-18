/*
 * XREFs of Feature_MSRC100019_58525777__private_IsEnabledFallback @ 0x140081EE8
 * Callers:
 *     Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline @ 0x140081F04 (Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MSRC100019_58525777__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MSRC100019_58525777__private_descriptor);
}
