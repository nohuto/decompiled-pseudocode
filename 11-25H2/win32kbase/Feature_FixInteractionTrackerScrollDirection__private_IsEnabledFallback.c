/*
 * XREFs of Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback @ 0x140222C7C
 * Callers:
 *     Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline @ 0x140222C44 (Feature_FixInteractionTrackerScrollDirection__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixInteractionTrackerScrollDirection__private_descriptor);
}
