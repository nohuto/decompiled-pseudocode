/*
 * XREFs of ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194
 * Callers:
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x1800358E0 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x1800C5BEC (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1800C5F98 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C6750 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C68EC (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1800C74EC (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x1800C8184 (-BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x1800C830C (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1800C8390 (-BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x1800C8650 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x180127890 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x18020ADD0 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x18021ACA4 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x180227758 (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802A379C (-BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1802ADD78 (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     ?BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z @ 0x1802B1028 (-BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802B5C6C (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z @ 0x180310E90 (-BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x180310FD0 (-BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180311028 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803110D8 (-BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x18031118C (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x1803112A8 (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x1803113C4 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803114E0 (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803115FC (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x180311714 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x180311868 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x18031633C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803164EC (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x1803165A0 (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803166D0 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x180316790 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x180316850 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 * Callees:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x1803157F4 (-EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z.c)
 */

void __fastcall GameDVR_OutputDebug::OutputString(LPCWSTR lpOutputString)
{
  STRSAFE_LPWSTR *v1; // rbx
  __int64 v3; // r8
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
      v3 = (char *)*v1 - (char *)lpOutputString;
      Buffer = *(_DWORD *)L"\r\n";
      NumberOfBytesWritten = 0;
      v6 = asc_180779DA8[2];
      WriteFile(GameDVR_OutputDebug::s_hTraceOutputFile, lpOutputString, 2 * (v3 >> 1), &NumberOfBytesWritten, 0LL);
      GameDVR_OutputDebug::s_dwBytesWritten += NumberOfBytesWritten;
      WriteFile(GameDVR_OutputDebug::s_hTraceOutputFile, &Buffer, 4u, &NumberOfBytesWritten, 0LL);
      GameDVR_OutputDebug::s_dwBytesWritten += NumberOfBytesWritten;
      if ( GameDVR_OutputDebug::s_dwBytesWritten >= 0x100000 )
        GameDVR_OutputDebug::EnsureTraceFileOpen(1);
    }
    LeaveCriticalSection(&GameDVR_OutputDebug::s_csLock);
  }
}
