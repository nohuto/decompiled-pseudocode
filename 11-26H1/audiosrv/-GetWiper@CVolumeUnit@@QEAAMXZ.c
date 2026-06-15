/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180050EB4
 * Callers:
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800508D0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180050D80 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x180050E40 (-FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180119640 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     pow @ 0x1800B31B4 (pow.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  double v2; // xmm0_8
  double v3; // xmm2_8
  double v4; // xmm7_8

  v2 = pow(10.0, *((float *)this + 1) / 20.0);
  v3 = v2;
  v4 = *((double *)this + 4);
  if ( *(_DWORD *)this == 1 )
  {
    if ( v2 > 1.0 )
    {
      v3 = 2.0 - pow(v2, -1.0 / *((double *)this + 7));
      return fmax(fmin((v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3)), 1.0), 0.0);
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return fmax(fmin((v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3)), 1.0), 0.0);
    v2 = v2 / *((double *)this + 5);
  }
  v3 = pow(v2, 1.0 / *((double *)this + 7));
  return fmax(fmin((v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3)), 1.0), 0.0);
}
