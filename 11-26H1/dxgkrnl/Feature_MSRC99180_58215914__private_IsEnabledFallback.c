/*
 * XREFs of Feature_MSRC99180_58215914__private_IsEnabledFallback @ 0x14007F7B0
 * Callers:
 *     Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline @ 0x14007F7CC (Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MSRC99180_58215914__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MSRC99180_58215914__private_descriptor);
}
