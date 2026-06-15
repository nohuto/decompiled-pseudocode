/*
 * XREFs of WPP_SF_qg @ 0x18011A20C
 * Callers:
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, 48LL, (__int64 *)va);
}
