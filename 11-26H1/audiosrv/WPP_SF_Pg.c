/*
 * XREFs of WPP_SF_Pg @ 0x18011A12C
 * Callers:
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z @ 0x180119D90 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, 36LL, (__int64 *)va);
}
