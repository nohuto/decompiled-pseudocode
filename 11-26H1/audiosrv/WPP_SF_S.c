/*
 * XREFs of WPP_SF_S @ 0x180082A54
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001A6D0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800247D0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180029070 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180036DB0 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180036EB0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800371DC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180041710 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180041C34 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180042210 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180042F44 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x1800490C0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051300 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800515E0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x18005D040 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18005FFD8 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180064800 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x1800685D8 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180069D60 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18006BD98 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180071690 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18007BE30 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180080250 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082590 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--operator().c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800CDEF0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE0F0 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE390 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800CE9EC (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x1800CED90 (-PropertyStoreCommit@CAudioSession@@UEAAJXZ.c)
 *     ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800CEDF0 (-PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800CEE70 (-PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800D0180 (-GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800D03B0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800D07A0 (-SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800D7BD0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800D9A90 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800DA47C (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800DA778 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F3FB0 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800F4070 (-LogOutput@@YAXPEBGZZ.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1801069C8 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 *     s_mmeNotifyDeviceAdded @ 0x180106C60 (s_mmeNotifyDeviceAdded.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180108E10 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1801091B4 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011D0AC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18011F1A0 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18011F450 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4, v5, 0LL);
}
