/*
 * XREFs of ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180118648
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180004254 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVolumeSoftware::LoadVolumeDefaultsForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // r14
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm6_4
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rdi
  unsigned __int64 v10; // r9
  float *v11; // r15
  int v12; // r13d
  char v13; // r12
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int16 v16; // dx
  float v17; // xmm0_4
  float v18; // xmm9_4
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // xmm10_8
  int v28; // xmm11_4
  float v29; // xmm9_4
  __int64 v30; // rdx
  ATL::CAtlException *v32; // rbx
  __int64 v33; // [rsp+0h] [rbp-1D8h] BYREF
  float v34; // [rsp+50h] [rbp-188h]
  __int64 v35; // [rsp+58h] [rbp-180h] BYREF
  float v36; // [rsp+60h] [rbp-178h]
  int v37; // [rsp+64h] [rbp-174h] BYREF
  __int64 v38; // [rsp+68h] [rbp-170h] BYREF
  float v39; // [rsp+70h] [rbp-168h] BYREF
  float v40; // [rsp+74h] [rbp-164h] BYREF
  int v41; // [rsp+78h] [rbp-160h]
  float *v42; // [rsp+80h] [rbp-158h]
  PROPVARIANT pvar[2]; // [rsp+88h] [rbp-150h] BYREF
  float *v44; // [rsp+98h] [rbp-140h]
  const wchar_t *v45; // [rsp+A0h] [rbp-138h] BYREF
  PROPVARIANT v46[2]; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-120h]
  PROPVARIANT v48[2]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-108h]
  PROPVARIANT v50[2]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-F0h]
  ATL::CAtlException *v52; // [rsp+F0h] [rbp-E8h] BYREF
  _BYTE v53[4]; // [rsp+100h] [rbp-D8h] BYREF
  float v54; // [rsp+104h] [rbp-D4h]
  float v55; // [rsp+108h] [rbp-D0h]
  float v56; // [rsp+114h] [rbp-C4h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]
  char v59; // [rsp+1E8h] [rbp+10h]
  int v60; // [rsp+1F0h] [rbp+18h] BYREF
  float v61; // [rsp+1F8h] [rbp+20h]

  v1 = this;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  *(_OWORD *)v46 = 0LL;
  v47 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v44 = 0LL;
  v2 = 0.0;
  v61 = 0.0;
  v3 = FLOAT_N96_0;
  v36 = FLOAT_N96_0;
  if ( *((_DWORD *)this + 74) == 4 )
    v4 = FLOAT_30_0;
  else
    v4 = 0.0;
  v34 = v4;
  v38 = 0LL;
  v35 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v38);
  v6 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v38);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1956LL;
    goto LABEL_8;
  }
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v38 + 32LL);
  v35 = 0LL;
  v6 = v9(v38, 0LL, &v35);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1958LL;
LABEL_8:
    v10 = (unsigned int)v6;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v10);
    goto LABEL_50;
  }
  v11 = 0LL;
  v42 = 0LL;
  v12 = 0;
  v41 = 0;
  v13 = 0;
  v59 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
          v35,
          &PKEY_APO_MasterVolumeLevel,
          pvar);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1966LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v14);
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v11 = v44;
    v42 = v44;
    v15 = LODWORD(pvar[1]) >> 2;
    v2 = *v44;
    v61 = *v44;
    v13 = 1;
    v59 = 1;
    if ( LODWORD(pvar[1]) >> 2 != *((_DWORD *)v1 + 29) )
    {
      v16 = 1;
      if ( v15 > 1 )
      {
        do
        {
          v17 = fmaxf(v44[v16], v2);
          v2 = v17;
          ++v16;
        }
        while ( v16 < v15 );
        v61 = v17;
      }
    }
LABEL_18:
    v18 = FLOAT_0_000015258789;
    goto LABEL_19;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
          v35,
          &PKEY_AudioEndpoint_Default_VolumeInDb,
          v50);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1988LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v21);
  if ( LOWORD(v50[0]) != 19 )
    goto LABEL_18;
  v18 = FLOAT_0_000015258789;
  v2 = (float)SLODWORD(v50[1]) * 0.000015258789;
  v61 = v2;
LABEL_19:
  v19 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
          v35,
          &PKEY_AudioEndpoint_Min_VolumeInDb,
          v48);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1997LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v19);
  if ( LOWORD(v48[0]) == 3 )
  {
    v3 = (float)SLODWORD(v48[1]) * v18;
    v36 = v3;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
          v35,
          &PKEY_AudioEndpoint_Max_VolumeInDb,
          v46);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2005LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v20);
  if ( LOWORD(v46[0]) == 19 )
  {
    v4 = (float)SLODWORD(v46[1]) * v18;
    v34 = v4;
  }
  if ( v3 > v4 )
  {
    v3 = FLOAT_N96_0;
    v36 = FLOAT_N96_0;
    if ( *((_DWORD *)v1 + 74) == 4 )
      v4 = FLOAT_30_0;
    else
      v4 = 0.0;
    v34 = v4;
    v2 = 0.0;
    v61 = 0.0;
  }
  v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v23 > 4u )
  {
    v39 = v4;
    v40 = v3;
    v37 = LODWORD(v2);
    LOBYTE(v60) = v13;
    v45 = (const wchar_t *)*((_QWORD *)v1 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v23,
      (int)&unk_1801A7AC5,
      v24,
      v25,
      &v45,
      (__int64)&v60,
      (__int64)&v37,
      (__int64)&v40,
      (__int64)&v39);
  }
  v26 = 0LL;
  v27 = *(_QWORD *)&DOUBLE_1_75;
  v28 = LODWORD(FLOAT_1_5);
  while ( 1 )
  {
    v60 = v26;
    if ( (unsigned int)v26 >= *((_DWORD *)v1 + 29) )
      break;
    if ( v13 && v12 == *((_DWORD *)v1 + 29) )
      v29 = v11[v26];
    else
      v29 = v2;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v53, (__int64)v22);
    CVolumeUnit::SetDBRange((__int64)v53, v30, v3, v4, v28, v27);
    v54 = fmaxf(fminf(v29, v56), v55);
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        (__int64 *)v1 + 10,
        (unsigned int)v26,
        (__int64)v53);
    }
    catch ( ATL::CAtlException *v52 )
    {
      v22 = &v33;
      v32 = v52;
      if ( *(_DWORD *)v52 == -1073741571 )
        _o__resetstkoflw();
      v37 = *(_DWORD *)v32;
      v7 = v37;
      if ( v37 < 0 )
      {
        v10 = (unsigned int)v37;
        v8 = 2041LL;
        goto LABEL_9;
      }
      v1 = this;
      v2 = v61;
      v3 = v36;
      v4 = v34;
      v11 = v42;
      v12 = v41;
      v13 = v59;
      v27 = *(_QWORD *)&DOUBLE_1_75;
      v28 = LODWORD(FLOAT_1_5);
      LODWORD(v26) = v60;
    }
    v26 = (unsigned int)(v26 + 1);
  }
  v7 = 0;
LABEL_50:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
  PropVariantClear(pvar);
  PropVariantClear(v46);
  PropVariantClear(v48);
  PropVariantClear(v50);
  return v7;
}
