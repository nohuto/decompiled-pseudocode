/*
 * XREFs of WPP_SF_Sd @ 0x1800CF92C
 * Callers:
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x1800140B0 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x180040D30 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180041C34 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18006A4C8 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x18006F260 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x18007B440 (-GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085190 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180086630 (-GetChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180108E10 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
