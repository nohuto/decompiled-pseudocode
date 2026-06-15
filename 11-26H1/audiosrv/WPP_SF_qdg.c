/*
 * XREFs of WPP_SF_qdg @ 0x180085804
 * Callers:
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18001A5D0 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800508D0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x1800540E0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180078AE0 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18007EAD0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdg(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, va1);
}
