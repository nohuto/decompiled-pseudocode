/*
 * XREFs of Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback @ 0x140608EA8
 * Callers:
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140608E6C (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DisableUserPresenceQosByPolicy__private_descriptor,
           0);
}
