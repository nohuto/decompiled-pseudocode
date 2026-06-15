/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006AC44 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180119640 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180119790 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180119930 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180050EB4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180050F80 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     WPP_SF_qdg @ 0x180085804 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     pow @ 0x1800B31B4 (pow.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  char *v2; // r14
  unsigned int v3; // esi
  double v4; // xmm0_8
  _DWORD *v5; // rbx
  float v6; // xmm6_4
  CVolumeUnit *v7; // rax
  float Wiper; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // rax
  double v11; // xmm0_8

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = (char *)this + 80;
  v3 = 0;
  if ( !*((_QWORD *)this + 11) )
    goto LABEL_20;
  v4 = pow(10.0, *(float *)(*(_QWORD *)v2 + 4LL) / 20.0);
  *((_DWORD *)this + 28) = 0;
  v5 = WPP_GLOBAL_Control;
  v6 = v4;
  if ( *((_DWORD *)this + 29) )
  {
    while ( 1 )
    {
      if ( v5 != (_DWORD *)&WPP_GLOBAL_Control && (v5[7] & 0x10000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      {
        v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                              (_QWORD *)this + 10,
                              v3);
        Wiper = CVolumeUnit::GetWiper(v7);
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17LL,
          &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
          this,
          v3,
          Wiper);
        v5 = WPP_GLOBAL_Control;
      }
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 11) )
        break;
      v9 = pow(10.0, *(float *)(((unsigned __int64)v3 << 6) + *(_QWORD *)v2 + 4) / 20.0);
      if ( v9 > v6 )
      {
        v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v3);
        v11 = pow(10.0, *(float *)(v10 + 4) / 20.0);
        *((_DWORD *)this + 28) = v3;
        v5 = WPP_GLOBAL_Control;
        v6 = v11;
      }
      if ( ++v3 >= *((_DWORD *)this + 29) )
        goto LABEL_15;
    }
LABEL_20:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_15:
  if ( v5 != (_DWORD *)&WPP_GLOBAL_Control && (v5[7] & 0x10000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    WPP_SF_qdg(
      *((_QWORD *)v5 + 2),
      18LL,
      &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v6);
}
