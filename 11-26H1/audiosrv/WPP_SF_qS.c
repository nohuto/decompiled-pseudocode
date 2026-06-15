/*
 * XREFs of WPP_SF_qS @ 0x1800CFD64
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051300 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180063C30 (-PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180082590 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800859D0 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18008CC30 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800CEEE0 (-PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qS(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v7; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  if ( v7 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v7 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
