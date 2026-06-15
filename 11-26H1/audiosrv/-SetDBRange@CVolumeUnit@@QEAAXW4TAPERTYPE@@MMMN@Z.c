/*
 * XREFs of ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180118648 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180050858 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow @ 0x1800B31B4 (pow.c)
 */

void __fastcall CVolumeUnit::SetDBRange(__int64 a1, __int64 a2, float a3, float a4, int a5, __int64 a6)
{
  double v7; // xmm0_8
  double v8; // xmm8_8
  double v9; // xmm0_8
  double v10; // xmm6_8

  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 56) = a6;
  *(_DWORD *)(a1 + 16) = a5;
  *(float *)(a1 + 8) = a3;
  *(float *)(a1 + 12) = a4;
  *(float *)(a1 + 20) = a4;
  v7 = pow(10.0, a3 / 20.0);
  *(double *)(a1 + 48) = v7;
  v8 = v7;
  v9 = pow(10.0, a4 / 20.0);
  *(double *)(a1 + 40) = v9;
  v10 = v9;
  *(double *)(a1 + 24) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v8, v9);
  *(double *)(a1 + 32) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v10, v10);
}
