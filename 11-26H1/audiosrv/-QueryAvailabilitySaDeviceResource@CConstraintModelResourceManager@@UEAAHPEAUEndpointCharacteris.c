/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4550
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18005D314 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F13FC (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x1800F2F6C (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800F32CC (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180159B78 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        CConstraintModelResourceManager *this,
        const unsigned __int16 ***a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned int a5)
{
  signed int v6; // edi
  const unsigned __int16 **v10; // rcx
  EffectPack *v11; // rcx
  CConstraintModel *v12; // rdi
  struct _GUID *v13; // rax
  struct IMMDevice *v14; // rbx
  int StreamResourceConsumption; // eax
  struct _ResourceInfo *v16; // r13
  __int64 v17; // rdx
  unsigned int v18; // r12d
  unsigned int v19; // eax
  struct AudioSrvTelemetryProvider *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  const unsigned __int16 **v23; // rax
  __int64 v24; // rcx
  struct AudioSrvTelemetryProvider *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  const unsigned __int16 **v28; // rax
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  int ResourceConsumptionInfoInGroup; // eax
  struct _ResourceInfo *v32; // rbx
  _DWORD *v33; // rcx
  const unsigned __int16 **v34; // rax
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _ResourceInfo *v37; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v39; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v41; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[256]; // [rsp+9Ch] [rbp-64h] BYREF
  __int128 v46; // [rsp+19Ch] [rbp+9Ch]
  __int128 v47; // [rsp+1ACh] [rbp+ACh]
  int v48; // [rsp+1BCh] [rbp+BCh]
  __int128 v49; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128i si128; // [rsp+1D0h] [rbp+D0h]
  __int128 v51; // [rsp+1E0h] [rbp+E0h]
  __m128i v52; // [rsp+1F0h] [rbp+F0h]
  __int128 v53; // [rsp+200h] [rbp+100h]
  __m128i v54; // [rsp+210h] [rbp+110h]
  int v55; // [rsp+220h] [rbp+120h]
  __int64 v56; // [rsp+228h] [rbp+128h]
  __int128 v57; // [rsp+230h] [rbp+130h]
  __int128 v58; // [rsp+240h] [rbp+140h]
  __int64 v59; // [rsp+250h] [rbp+150h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v6 = 0;
  if ( !CConstraintModelResourceManager::EndpointResourceValidity((RTL_SRWLOCK *)this, *a2) )
    return v6 >= 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v40 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v43 = 0LL;
  v44 = 0;
  memset_0(v45, 0, sizeof(v45));
  v10 = *a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v49 = 0LL;
  LOWORD(v49) = 0;
  v51 = 0LL;
  LOWORD(v51) = 0;
  v53 = 0LL;
  LOWORD(v53) = 0;
  v46 = 0LL;
  v48 = 0;
  v47 = 0LL;
  v55 = 0;
  v52 = si128;
  v54 = si128;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v38 = 0LL;
  v36 = 0;
  v37 = 0LL;
  v39 = 0LL;
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v10 + 5, &v39);
  v11 = (EffectPack *)a2[1];
  v12 = (CConstraintModel *)*((_QWORD *)this + 7);
  v41 = *a3;
  v13 = EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(v11, &v42, (unsigned int)a4, &v41);
  v14 = v39;
  v41 = *v13;
  StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v12, v39, &v41, a4, &v36, &v37);
  v16 = v37;
  v6 = StreamResourceConsumption;
  if ( StreamResourceConsumption < 0 )
  {
    v17 = 1319LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)StreamResourceConsumption);
    goto LABEL_27;
  }
  v18 = v36;
  if ( v36 )
  {
    StreamResourceConsumption = CConstraintModel::GetEndpointInformationFromId(
                                  *((CConstraintModel **)this + 7),
                                  v14,
                                  (struct EndpointInfo *)&v49);
    v6 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
    {
      v17 = 1325LL;
      goto LABEL_7;
    }
    v19 = (*((__int64 (__fastcall **)(const unsigned __int16 **))**a2 + 7))(*a2);
    v6 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
           this,
           (const struct EndpointInfo *)&v49,
           a5,
           v19,
           1,
           0);
    if ( v6 < 0 )
    {
      v20 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v20 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v20 + 1), 512LL) )
      {
        v23 = *a2;
        v36 = v6;
        LODWORD(v37) = a5;
        v38 = (unsigned __int64)v23[6];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          byte_1801A5A92,
          v21,
          v22,
          (const wchar_t **)&v38,
          (__int64)&v37,
          (__int64)&v36);
      }
      goto LABEL_27;
    }
    v6 = CConstraintModelResourceManager::AssignResourceGroup(
           (struct _RTL_CRITICAL_SECTION *)this,
           v14,
           (struct EndpointInfo *)&v49,
           v16,
           v18,
           a5,
           1,
           (struct ResourceHandleInfo *)&v43);
    if ( v6 >= 0 )
    {
      if ( DWORD1(v58) )
      {
        v36 = 0;
        v37 = 0LL;
        ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                           v24,
                                           SDWORD2(v58),
                                           (__int64)v16,
                                           v18,
                                           &v36,
                                           &v37);
        v32 = v37;
        v6 = ResourceConsumptionInfoInGroup;
        if ( ResourceConsumptionInfoInGroup >= 0 )
          v6 = CConstraintModelResourceManager::AcquireResourceHandle(this, v37, v36, a5, 1, &v38);
        if ( v32 )
          operator delete(v32);
      }
      else
      {
        v6 = CConstraintModelResourceManager::AcquireResourceHandle(this, v16, v18, a5, 1, &v38);
      }
      if ( v6 >= 0 )
        goto LABEL_27;
      v33 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v33 <= 4u || !tlgKeywordOn((__int64)v33, 512LL) )
        goto LABEL_27;
      v34 = *a2;
      LODWORD(v37) = v6;
      v36 = a5;
      v38 = (unsigned __int64)v34[6];
      v29 = (unsigned __int8 *)&unk_1801A5A19;
    }
    else
    {
      v25 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v25 + 1) <= 4u || !tlgKeywordOn(*((_QWORD *)v25 + 1), 512LL) )
        goto LABEL_27;
      v28 = *a2;
      v29 = (unsigned __int8 *)&unk_1801A5B07;
      LODWORD(v37) = v6;
      v36 = a5;
      v38 = (unsigned __int64)v28[6];
      v30 = v26;
    }
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v30,
      v29,
      v26,
      v27,
      (const wchar_t **)&v38,
      (__int64)&v36,
      (__int64)&v37);
  }
LABEL_27:
  if ( v16 )
    operator delete(v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v43);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v40);
  return v6 >= 0;
}
