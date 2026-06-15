/*
 * XREFs of WPP_SF_qD @ 0x1800CFEB4
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015E40 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001A6D0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     AUDIOSERVER_rundown @ 0x1800257C0 (AUDIOSERVER_rundown.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180036EB0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18005F134 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18005F424 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x180063F70 (-GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z.c)
 *     ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x180064410 (-GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180064800 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800691A0 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006A070 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x18006A9A0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006AC44 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007B1A0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180081A80 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180085DA0 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800D03B0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D0540 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D21A0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x180109520 (-SetMuteValue@CMuteHardware@@UEAAJH@Z.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1801095B0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180111D50 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011FD00 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801216C0 (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121824 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121A78 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
