/*
 * XREFs of Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x1800E4E40
 * Callers:
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x1800E4DF8 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_LoaderSnapsBuffer__private_descriptor);
}
