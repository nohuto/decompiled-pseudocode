/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180029070 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180036DB0 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180036EB0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800371DC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007D518 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081510 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180085DA0 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800D03B0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D0540 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800D51D0 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180110144 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     _lambda_2105041f0c5016ef5fdaddf32fc575ff_::operator() @ 0x1801357F0 (_lambda_2105041f0c5016ef5fdaddf32fc575ff_--operator().c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180152920 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // r8
  signed __int64 v6; // r9
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = 2147483646 - v3;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v8 = (unsigned __int16 *)a1;
    *v8 = 0;
    result = 2147942522LL;
    if ( v3 )
      return 0LL;
  }
  else
  {
    result = 2147942487LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  return result;
}
