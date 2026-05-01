/*
 * XREFs of ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x1800B0810
 * Callers:
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1800B0680 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 * Callees:
 *     ?Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x1800B095C (-Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates(void)
{
  WCHAR OutputString[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates");
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates();
}
