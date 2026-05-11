/*
 * XREFs of Feature_MIDI2__private_IsEnabledFallback @ 0x14000C114
 * Callers:
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14000D3B0 (wil_details_IsEnabledFallback.c)
 */

__int64 Feature_MIDI2__private_IsEnabledFallback()
{
  return wil_details_IsEnabledFallback();
}
