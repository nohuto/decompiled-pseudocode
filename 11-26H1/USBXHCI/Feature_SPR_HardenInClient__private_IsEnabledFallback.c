/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044E2C
 * Callers:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044DF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SPR_HardenInClient__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SPR_HardenInClient__private_descriptor);
}
