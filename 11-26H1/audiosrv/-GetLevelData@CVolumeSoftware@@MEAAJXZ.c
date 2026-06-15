/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180118648 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@details@wil@@QEAA_NXZ @ 0x18011A0F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@det.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  unsigned int *v2; // r14
  int VolumeDefaultsForEndpoint; // eax
  int v5; // edi
  __int64 *v6; // rdx
  unsigned int v7; // esi
  float v8; // xmm7_4
  __int64 v9; // xmm8_8
  int v10; // xmm9_4
  float v11; // xmm10_4
  __int64 v12; // rdx
  float v13; // xmm3_4
  int *v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-F8h] BYREF
  ATL::CAtlException *v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[4]; // [rsp+40h] [rbp-B8h] BYREF
  float v18; // [rsp+44h] [rbp-B4h]
  float v19; // [rsp+48h] [rbp-B0h]
  float v20; // [rsp+54h] [rbp-A4h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v23; // [rsp+118h] [rbp+20h]

  v1 = this;
  v2 = (unsigned int *)((char *)this + 116);
  v23 = (char *)this + 116;
  if ( !*((_DWORD *)this + 29) )
    return 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfigurableSWVolumeControl>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ConfigurableSWVolumeControl>::GetImpl'::`2'::impl) )
  {
    VolumeDefaultsForEndpoint = CVolumeSoftware::LoadVolumeDefaultsForEndpoint(v1);
    v5 = VolumeDefaultsForEndpoint;
    if ( VolumeDefaultsForEndpoint >= 0 )
    {
      CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x817,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)VolumeDefaultsForEndpoint);
  }
  else
  {
    v5 = 0;
    if ( (int)CVolumeSoftware::LoadVolumeState(v1) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x31u,
          (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
          *((const wchar_t **)v1 + 7));
      }
      v7 = 0;
      v8 = FLOAT_30_0;
      v9 = *(_QWORD *)&DOUBLE_1_75;
      v10 = LODWORD(FLOAT_1_5);
      v11 = FLOAT_N96_0;
      while ( v7 < *v2 )
      {
        CVolumeUnit::CVolumeUnit((CVolumeUnit *)v17, (__int64)v6);
        if ( *((_DWORD *)v1 + 74) == 4 )
          v13 = v8;
        else
          v13 = 0.0;
        CVolumeUnit::SetDBRange((__int64)v17, v12, v11, v13, v10, v9);
        v18 = fmaxf(fminf(0.0, v20), v19);
        v5 = 0;
        try
        {
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((__int64 *)v1 + 10, v7, (__int64)v17);
        }
        catch ( ATL::CAtlException *v16 )
        {
          v6 = &v15;
          v14 = (int *)v16;
          if ( *(_DWORD *)v16 == -1073741571 )
            _o__resetstkoflw();
          v5 = *v14;
          if ( *v14 < 0 )
            goto LABEL_23;
          v1 = this;
          v8 = FLOAT_30_0;
          v9 = *(_QWORD *)&DOUBLE_1_75;
          v10 = LODWORD(FLOAT_1_5);
          v11 = FLOAT_N96_0;
          v2 = (unsigned int *)v23;
        }
        ++v7;
      }
    }
    CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
    if ( v5 < 0 )
LABEL_23:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 2126, v5);
  }
  return (unsigned int)v5;
}
