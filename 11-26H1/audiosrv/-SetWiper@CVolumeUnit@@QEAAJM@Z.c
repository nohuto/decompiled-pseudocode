/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180050FAC
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800508D0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180119640 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180119930 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x1800B31A8 (_o_log10_0.c)
 *     pow @ 0x1800B31B4 (pow.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm6_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  float v6; // xmm0_4
  __int64 result; // rax

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3);
  if ( *(_DWORD *)this == 1 )
  {
    v4 = *((double *)this + 7);
    if ( v3 > 1.0 )
    {
      *(_QWORD *)&v4 ^= _xmm;
      v3 = 2.0 - v3;
    }
    v3 = pow(v3, v4);
  }
  else if ( *(_DWORD *)this == 2 )
  {
    v3 = pow(v3, *((double *)this + 7)) * *((double *)this + 5);
  }
  if ( pow(10.0, -9.6) <= v3 )
    v5 = o_log10_0(v3) * 20.0;
  else
    v5 = DOUBLE_N192_0;
  v6 = v5;
  result = 0LL;
  *((float *)this + 1) = fminf(v6, *((float *)this + 5));
  return result;
}
