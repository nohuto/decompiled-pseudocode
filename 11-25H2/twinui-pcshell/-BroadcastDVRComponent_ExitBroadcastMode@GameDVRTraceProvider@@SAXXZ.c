/*
 * XREFs of ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AB0FC
 * Callers:
 *     ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x180241850 (-ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?Shell_BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AB154 (-Shell_BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_ExitBroadcastMode(void)
{
  WCHAR OutputString[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_ExitBroadcastMode");
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_ExitBroadcastMode();
}
