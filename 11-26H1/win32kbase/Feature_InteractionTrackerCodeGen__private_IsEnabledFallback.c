/*
 * XREFs of Feature_InteractionTrackerCodeGen__private_IsEnabledFallback @ 0x140244648
 * Callers:
 *     Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline @ 0x14024460C (Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_InteractionTrackerCodeGen__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_InteractionTrackerCodeGen__private_descriptor);
}
