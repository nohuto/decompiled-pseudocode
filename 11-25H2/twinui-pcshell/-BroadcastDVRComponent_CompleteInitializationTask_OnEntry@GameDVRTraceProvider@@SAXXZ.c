/*
 * XREFs of ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800B0CEC
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?Shell_BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800B0D44 (-Shell_BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnEntry(void)
{
  WCHAR OutputString[1032]; // [rsp+20h] [rbp-828h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_CompleteInitializationTask_OnEntry");
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_CompleteInitializationTask_OnEntry();
}
