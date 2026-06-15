/*
 * XREFs of ?ValidateAudioLevel@@YA_NM@Z @ 0x1800407AC
 * Callers:
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180024BC8 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180040430 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180040640 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18007EAD0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180081EA0 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180085870 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800D0840 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800D53EC (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
