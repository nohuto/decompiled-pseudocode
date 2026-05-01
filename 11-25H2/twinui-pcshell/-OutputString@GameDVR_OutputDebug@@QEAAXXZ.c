/*
 * XREFs of ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498
 * Callers:
 *     ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x1800B0810 (-BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800B0CEC (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1800B0D70 (-BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x1800B15D0 (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1800B1A50 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800B2410 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800B25AC (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1800B2FBC (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x1800B358C (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1800B6030 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x1802191F0 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180223E9C (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x180229A84 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180235944 (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AB0FC (-BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1802B6E4C (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     ?BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z @ 0x1802B9C30 (-BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802BE9E8 (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z @ 0x180314D10 (-BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180314E4C (-BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180314EA4 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x180314F54 (-BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x180315004 (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x18031511C (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x180315234 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x18031534C (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x180315464 (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x180315570 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803156C0 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x180319E9C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x18031A03C (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x18031A0EC (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031A214 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031A2D4 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031A394 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 * Callees:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x180319358 (-EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z.c)
 */

void __fastcall GameDVR_OutputDebug::OutputString(LPCWSTR lpOutputString)
{
  STRSAFE_LPWSTR *v1; // rbx
  STRSAFE_LPWSTR v3; // r8
  DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-28h] BYREF
  int Buffer; // [rsp+34h] [rbp-24h] BYREF
  wchar_t v6; // [rsp+38h] [rbp-20h]

  v1 = (STRSAFE_LPWSTR *)(lpOutputString + 1024);
  if ( GameDVR_OutputDebug::s_fOutputToDebugger )
  {
    StringCchPrintfExW(
      *v1,
      *((_QWORD *)lpOutputString + 257),
      (unsigned __int16 **)lpOutputString + 256,
      (unsigned __int64 *)lpOutputString + 257,
      0,
      L"\n");
    OutputDebugStringW(lpOutputString);
  }
  if ( GameDVR_OutputDebug::s_hTraceOutputFile != (HANDLE)-1LL )
  {
    EnterCriticalSection(&GameDVR_OutputDebug::s_csLock);
    if ( GameDVR_OutputDebug::s_hTraceOutputFile != (HANDLE)-1LL )
    {
      v3 = *v1;
      NumberOfBytesWritten = 0;
      Buffer = *(_DWORD *)L"\r\n";
      v6 = asc_180754ED4[2];
      WriteFile(
        GameDVR_OutputDebug::s_hTraceOutputFile,
        lpOutputString,
        2 * (v3 - lpOutputString),
        &NumberOfBytesWritten,
        0LL);
      GameDVR_OutputDebug::s_dwBytesWritten += NumberOfBytesWritten;
      WriteFile(GameDVR_OutputDebug::s_hTraceOutputFile, &Buffer, 4u, &NumberOfBytesWritten, 0LL);
      GameDVR_OutputDebug::s_dwBytesWritten += NumberOfBytesWritten;
      if ( GameDVR_OutputDebug::s_dwBytesWritten >= 0x100000 )
        GameDVR_OutputDebug::EnsureTraceFileOpen(1);
    }
    LeaveCriticalSection(&GameDVR_OutputDebug::s_csLock);
  }
}
