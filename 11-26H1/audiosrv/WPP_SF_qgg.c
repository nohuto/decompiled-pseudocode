/*
 * XREFs of WPP_SF_qgg @ 0x18011A2D4
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, 32LL, (__int64 *)va);
}
