/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x18008D298
 * Callers:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SdbValidateRootTagsOnOpen__private_descriptor);
}
