/*
 * XREFs of ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180227758
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?Shell_BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x1802C64D4 (-Shell_BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnExit(void)
{
  wchar_t pszDest[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(pszDest, "BroadcastDVRComponent_CompleteInitializationTask_OnExit");
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_CompleteInitializationTask_OnExit();
}
