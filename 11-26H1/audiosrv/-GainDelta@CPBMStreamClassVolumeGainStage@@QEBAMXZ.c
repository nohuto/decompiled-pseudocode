/*
 * XREFs of ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800CE0C8
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x18006B660 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800D02A0 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CPBMStreamClassVolumeGainStage::GainDelta(CPBMStreamClassVolumeGainStage *this)
{
  double v1; // xmm0_8

  v1 = (***((double (__fastcall ****)(_QWORD))this + 7))(*((_QWORD *)this + 7));
  return ConvertDbToEngineVolume(v1);
}
