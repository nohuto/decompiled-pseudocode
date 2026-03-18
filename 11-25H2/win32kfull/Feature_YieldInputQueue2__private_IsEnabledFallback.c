/*
 * XREFs of Feature_YieldInputQueue2__private_IsEnabledFallback @ 0x140281CC4
 * Callers:
 *     Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline @ 0x140281CE0 (Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_YieldInputQueue2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_YieldInputQueue2__private_descriptor);
}
