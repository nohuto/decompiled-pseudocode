/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_qdg @ 0x180085804 (WPP_SF_qdg.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800CFD64 (WPP_SF_qS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  float *v12; // r15
  unsigned int v13; // esi
  float v14; // xmm6_4
  unsigned int *v15; // r13
  unsigned __int16 v16; // cx
  float v17; // xmm0_4
  float v18; // xmm8_4
  __int64 v19; // xmm10_8
  int v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm7_4
  __int64 v23; // rdx
  float v24; // xmm3_4
  ATL::CAtlException *v25; // rbx
  __int64 v26; // [rsp+0h] [rbp-168h] BYREF
  __int64 *v27; // [rsp+30h] [rbp-138h] BYREF
  __int64 v28; // [rsp+38h] [rbp-130h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-128h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-120h] BYREF
  float *v31; // [rsp+58h] [rbp-110h]
  float *v32; // [rsp+60h] [rbp-108h]
  unsigned int *v33; // [rsp+68h] [rbp-100h]
  ATL::CAtlException *v34; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v35[4]; // [rsp+80h] [rbp-E8h] BYREF
  float v36; // [rsp+84h] [rbp-E4h]
  float v37; // [rsp+88h] [rbp-E0h]
  float v38; // [rsp+94h] [rbp-D4h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]
  float v41; // [rsp+178h] [rbp+10h]
  unsigned int v42; // [rsp+180h] [rbp+18h]
  int v43; // [rsp+188h] [rbp+20h]

  v1 = this;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43,
      (unsigned int)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 7));
  }
  v2 = 0;
  v27 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v27);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x703,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v3);
    if ( v27 )
      (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
    return v4;
  }
  v28 = 0LL;
  v6 = *v27;
  v28 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v6 + 32))(v27, 0LL, &v28);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x706,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v7);
LABEL_39:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    return v4;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, v1);
  }
  *(_OWORD *)pvar = 0LL;
  v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
         v28,
         &PKEY_APO_MasterVolumeLevel,
         pvar);
  v4 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 1808LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v10);
    PropVariantClear(pvar);
    goto LABEL_39;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v12 = v31;
    v32 = v31;
    v13 = LODWORD(pvar[1]) >> 2;
    v29 = LODWORD(pvar[1]) >> 2;
    v14 = *v31;
    v41 = *v31;
    v15 = (unsigned int *)((char *)v1 + 116);
    v33 = (unsigned int *)((char *)v1 + 116);
    if ( LODWORD(pvar[1]) >> 2 != *((_DWORD *)v1 + 29) )
    {
      v16 = 1;
      if ( v13 > 1 )
      {
        do
        {
          v17 = fmaxf(v31[v16], v14);
          v14 = v17;
          ++v16;
        }
        while ( v16 < v13 );
        v41 = v17;
      }
    }
    v18 = FLOAT_30_0;
    v19 = *(_QWORD *)&DOUBLE_1_75;
    v20 = LODWORD(FLOAT_1_5);
    v21 = FLOAT_N96_0;
    while ( 1 )
    {
      v42 = v2;
      if ( v2 >= *v15 )
        break;
      if ( v13 == *v15 )
        v22 = v12[v2];
      else
        v22 = v14;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          45LL,
          &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
          v1,
          v2,
          v22);
      }
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v35, (__int64)v9);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v24 = v18;
      else
        v24 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v35, v23, v21, v24, v20, v19);
      try
      {
        v36 = fmaxf(fminf(v22, v38), v37);
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, v2, v35);
      }
      catch ( ATL::CAtlException *v34 )
      {
        v9 = &v26;
        v25 = v34;
        if ( *(_DWORD *)v34 == -1073741571 )
          _o__resetstkoflw();
        v43 = *(_DWORD *)v25;
        v4 = *(_DWORD *)v25;
        if ( v43 < 0 )
        {
          v10 = (unsigned int)v43;
          v11 = 1847LL;
          goto LABEL_38;
        }
        v1 = this;
        v12 = v32;
        v13 = v29;
        v14 = v41;
        v2 = v42;
        v18 = FLOAT_30_0;
        v19 = *(_QWORD *)&DOUBLE_1_75;
        v20 = LODWORD(FLOAT_1_5);
        v21 = FLOAT_N96_0;
        v15 = v33;
      }
      ++v2;
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    return 0LL;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
    return 2147943568LL;
  }
}
