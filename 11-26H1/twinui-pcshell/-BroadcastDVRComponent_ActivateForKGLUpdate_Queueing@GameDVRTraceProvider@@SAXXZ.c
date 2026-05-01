/*
 * XREFs of ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180310FD0
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800C6E04 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180314904 (-Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_ActivateForKGLUpdate_Queueing(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_ActivateForKGLUpdate_Queueing");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_ActivateForKGLUpdate_Queueing();
}
