/*
 * XREFs of Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback @ 0x1806502C4
 * Callers:
 *     Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsageNoInline @ 0x180650294 (Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2);
}
