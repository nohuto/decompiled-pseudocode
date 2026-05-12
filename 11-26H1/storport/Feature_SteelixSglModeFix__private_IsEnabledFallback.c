/*
 * XREFs of Feature_SteelixSglModeFix__private_IsEnabledFallback @ 0x140078BBC
 * Callers:
 *     Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline @ 0x140078B80 (Feature_SteelixSglModeFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SteelixSglModeFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SteelixSglModeFix__private_descriptor);
}
