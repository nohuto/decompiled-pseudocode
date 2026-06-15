/*
 * XREFs of ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800F16B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F13FC (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x1800F2F6C (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800F32CC (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?NewNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBUResourceHandleInfo@@PEAV312@1@Z @ 0x1800F41C4 (-NewNode@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAA.c)
 *     WPP_SF_dI @ 0x1800F5FF0 (WPP_SF_dI.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180159B78 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        EffectPack **a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v7; // r13
  struct CEndpointCharacteristics *v8; // rdx
  int EndpointInformationFromId; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // r15d
  bool v13; // al
  EffectPack *v14; // rcx
  EffectPack *v15; // rcx
  CConstraintModel *v16; // rdi
  struct _GUID *v17; // rax
  struct IMMDevice *v18; // rbx
  int StreamResourceConsumption; // eax
  __int64 v20; // r8
  struct _ResourceInfo *v21; // r12
  unsigned int v22; // r15d
  unsigned int v23; // eax
  __int64 v24; // rcx
  int ResourceConsumptionInfoInGroup; // eax
  struct _ResourceInfo *v26; // rbx
  int v27; // eax
  int v28; // eax
  struct EndpointCharacteristicsDescriptor *v29; // rbx
  EffectPack *v30; // rcx
  struct _GUID *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v39; // [rsp+40h] [rbp-C0h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v42; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v43[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct EndpointCharacteristicsDescriptor *v44; // [rsp+68h] [rbp-98h]
  struct _GUID v45; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID *v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v47; // [rsp+88h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+90h] [rbp-70h] BYREF
  struct _GUID v49; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+B8h] [rbp-48h]
  char v52[256]; // [rsp+BCh] [rbp-44h] BYREF
  struct _GUID v53; // [rsp+1BCh] [rbp+BCh]
  __int128 v54; // [rsp+1CCh] [rbp+CCh]
  int v55; // [rsp+1DCh] [rbp+DCh]
  __int128 v56; // [rsp+1E0h] [rbp+E0h] BYREF
  __m128i si128; // [rsp+1F0h] [rbp+F0h]
  __int128 v58; // [rsp+200h] [rbp+100h]
  __m128i v59; // [rsp+210h] [rbp+110h]
  __int128 v60; // [rsp+220h] [rbp+120h]
  __m128i v61; // [rsp+230h] [rbp+130h]
  int v62; // [rsp+240h] [rbp+140h]
  __int64 v63; // [rsp+248h] [rbp+148h]
  __int128 v64; // [rsp+250h] [rbp+150h]
  __int128 v65; // [rsp+260h] [rbp+160h]
  __int64 v66; // [rsp+270h] [rbp+170h]

  v44 = (struct EndpointCharacteristicsDescriptor *)a2;
  v7 = 0LL;
  v8 = *a2;
  EndpointInformationFromId = 0;
  v47 = a6;
  v10 = a4;
  v40 = a4;
  v46 = a3;
  v13 = CConstraintModelResourceManager::EndpointResourceValidity(this, v8);
  *a6 = 0LL;
  if ( !v13 )
    return (unsigned int)EndpointInformationFromId;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v48 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v50 = 0LL;
  v51 = 0;
  memset_0(v52, 0, sizeof(v52));
  v14 = *a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v56 = 0LL;
  LOWORD(v56) = 0;
  v58 = 0LL;
  LOWORD(v58) = 0;
  v60 = 0LL;
  LOWORD(v60) = 0;
  v53 = 0LL;
  v55 = 0;
  v54 = 0LL;
  v62 = 0;
  v59 = si128;
  v61 = si128;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v41 = 0LL;
  v39 = 0;
  v43[0] = 0LL;
  v42 = 0LL;
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v14 + 5, &v42);
  v15 = a2[1];
  v16 = (CConstraintModel *)*((_QWORD *)this + 7);
  v45 = *a3;
  v17 = EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(v15, &v49, (unsigned int)v10, &v45);
  v18 = v42;
  v45 = *v17;
  StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v16, v42, &v45, v10, &v39, v43);
  v21 = v43[0];
  EndpointInformationFromId = StreamResourceConsumption;
  if ( StreamResourceConsumption < 0 )
    goto LABEL_25;
  v22 = v39;
  if ( v39 )
  {
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(
                                  *((CConstraintModel **)this + 7),
                                  v18,
                                  (struct EndpointInfo *)&v56);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_24;
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v44 + 56LL))(*(_QWORD *)v44);
    EndpointInformationFromId = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                                  this,
                                  &v56,
                                  a5,
                                  v23,
                                  0,
                                  0);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_24;
    EndpointInformationFromId = CConstraintModelResourceManager::AssignResourceGroup(
                                  this,
                                  v18,
                                  (struct EndpointInfo *)&v56,
                                  v21,
                                  v22,
                                  a5,
                                  0,
                                  (struct ResourceHandleInfo *)&v50);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_24;
    if ( DWORD1(v65) )
    {
      v39 = 0;
      v43[0] = 0LL;
      ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                         v24,
                                         DWORD2(v65),
                                         v21,
                                         v22,
                                         &v39,
                                         v43);
      v26 = v43[0];
      EndpointInformationFromId = ResourceConsumptionInfoInGroup;
      if ( ResourceConsumptionInfoInGroup >= 0 )
      {
        v27 = CConstraintModelResourceManager::AcquireResourceHandle(this, v43[0], v39, a5, 0, &v41);
        v7 = v41;
        EndpointInformationFromId = v27;
      }
      if ( v26 )
        operator delete(v26);
    }
    else
    {
      v28 = CConstraintModelResourceManager::AcquireResourceHandle(this, v21, v22, a5, 0, &v41);
      v7 = v41;
      EndpointInformationFromId = v28;
    }
    if ( EndpointInformationFromId < 0 )
    {
LABEL_24:
      v10 = v40;
    }
    else
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)v43,
        (struct _RTL_CRITICAL_SECTION *)this + 2);
      v29 = v44;
      v10 = v40;
      v30 = (EffectPack *)*((_QWORD *)v44 + 1);
      v45 = *v46;
      v31 = EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(v30, &v49, (unsigned int)v40, &v45);
      v32 = *(_QWORD *)v29;
      v53 = *v31;
      v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 56LL))(v32);
      v34 = *(_QWORD *)v29;
      *(_QWORD *)&v54 = __PAIR64__(v10, v33);
      v50 = v7;
      v51 = 0;
      LODWORD(v65) = a5;
      EndpointInformationFromId = StringCchCopyW(v52, 128LL, *(char **)(v34 + 48));
      if ( EndpointInformationFromId >= 0 )
      {
        v36 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::NewNode(
                (char *)this + 120,
                &v50,
                v35,
                *((_QWORD *)this + 15));
        v37 = *((_QWORD *)this + 15);
        if ( v37 )
          *(_QWORD *)(v37 + 8) = v36;
        else
          *((_QWORD *)this + 16) = v36;
        *((_QWORD *)this + 15) = v36;
      }
      ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v43);
      if ( EndpointInformationFromId >= 0 )
        goto LABEL_20;
    }
LABEL_25:
    if ( EndpointInformationFromId == -2005139335 && v10 == eOffloadConnector )
      EndpointInformationFromId = -2005139370;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
        EndpointInformationFromId);
    }
    goto LABEL_32;
  }
LABEL_20:
  *v47 = v7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, v20, a5, v7);
  }
LABEL_32:
  if ( v21 )
    operator delete(v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v50);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
  return (unsigned int)EndpointInformationFromId;
}
