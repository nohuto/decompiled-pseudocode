/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F2A54
 * Callers:
 *     ?Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800F4360 (-Process@ReacquireResourceWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800F0EC4 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800F317C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800F3260 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800F32CC (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4378 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800F4ABC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     WPP_SF_ddI @ 0x1800F60B0 (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x1800F6118 (WPP_SF_ddID.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // r12d
  int EndpointCharacteristics; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct _ResourceInfo *v8; // rbx
  int v9; // esi
  struct CEndpointCharacteristics *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  struct CEndpointCharacteristics *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r9
  struct IMMDevice *v21; // r12
  __int64 v22; // rcx
  struct IMMDevice *v23; // rax
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rcx
  struct IMMDevice *v27; // rax
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CEndpointCharacteristics *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _ResourceInfo *v34; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-88h]
  struct _GUID v37; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v41[128]; // [rsp+ACh] [rbp-54h] BYREF
  struct _GUID v42; // [rsp+1ACh] [rbp+ACh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43[4]; // [rsp+1BCh] [rbp+BCh]
  int v44; // [rsp+1CCh] [rbp+CCh]
  __int128 v45; // [rsp+1D0h] [rbp+D0h]
  __m128i si128; // [rsp+1E0h] [rbp+E0h]
  __int128 v47; // [rsp+1F0h] [rbp+F0h]
  __m128i v48; // [rsp+200h] [rbp+100h]
  __int128 v49; // [rsp+210h] [rbp+110h]
  __m128i v50; // [rsp+220h] [rbp+120h]
  int v51; // [rsp+230h] [rbp+130h]
  __int64 v52; // [rsp+238h] [rbp+138h]
  __int128 v53; // [rsp+240h] [rbp+140h]
  __int128 v54; // [rsp+250h] [rbp+150h]
  __int64 v55; // [rsp+260h] [rbp+160h]

  v4 = a2;
  v30 = a2;
  EndpointCharacteristics = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v38 = v7;
  v39 = 0LL;
  v40 = 0;
  memset_0(v41, 0, sizeof(v41));
  v42 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = 0LL;
  LOWORD(v45) = 0;
  v47 = 0LL;
  v48 = si128;
  LOWORD(v47) = 0;
  v49 = 0LL;
  v50 = si128;
  LOWORD(v49) = 0;
  v51 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v36 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v32,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( !*((_DWORD *)a3 + 118) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ddI(*((_QWORD *)WPP_GLOBAL_Control + 2), WPP_GLOBAL_Control, v12, v4, 0, **a3);
    }
    v13 = (struct CEndpointCharacteristics *)*((_QWORD *)this + 15);
    v33 = v13;
    while ( v13 )
    {
      v14 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v11, v13);
      v15 = **a3;
      if ( v15 == *(_QWORD *)v14 )
      {
        v36 = **a3;
        v10 = v13;
        v9 = 1;
        *(_DWORD *)(v14 + 296) = 1;
        ResourceHandleInfo::operator=((__int64)&v39, v14);
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v15,
        &v33);
      v13 = v33;
    }
    v8 = 0LL;
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v32);
  if ( v9 )
  {
    v31 = 0;
    v18 = 0LL;
    v35 = 0LL;
    v29 = 0;
    v34 = 0LL;
    v33 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v41, 0, &v33);
    if ( EndpointCharacteristics >= 0 )
    {
      v32[0] = 0LL;
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v33 + 5, v32);
      v37 = v42;
      EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                  *((CConstraintModel **)this + 7),
                                  v32[0],
                                  &v37,
                                  v43[1],
                                  &v29,
                                  &v34);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      if ( EndpointCharacteristics >= 0 )
      {
        v20 = v29;
        if ( !v29 )
        {
          v8 = v34;
          goto LABEL_52;
        }
        if ( DWORD1(v54) )
        {
          v29 = 0;
          v32[0] = 0LL;
          v8 = v34;
          EndpointCharacteristics = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                      v19,
                                      DWORD2(v54),
                                      v34,
                                      v20,
                                      &v29,
                                      v32);
          v21 = v32[0];
          if ( EndpointCharacteristics >= 0 )
          {
            EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                        this,
                                        v36,
                                        (struct _ResourceInfo *)v32[0],
                                        v29,
                                        v30,
                                        &v31,
                                        &v35);
            v18 = v35;
          }
          if ( v21 )
            operator delete(v21);
          v4 = v30;
        }
        else
        {
          v8 = v34;
          EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                      this,
                                      v36,
                                      v34,
                                      v29,
                                      v4,
                                      &v31,
                                      &v35);
          v18 = v35;
        }
        if ( EndpointCharacteristics < 0 )
          goto LABEL_41;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&v37,
          (struct _RTL_CRITICAL_SECTION *)this + 2);
        v23 = (struct IMMDevice *)*((_QWORD *)this + 15);
        v32[0] = v23;
        while ( v23 && v23 != (struct IMMDevice *)v10 )
        {
          ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
            v22,
            v32);
          v23 = v32[0];
        }
        if ( v23 && v23 == (struct IMMDevice *)v10 )
        {
          v24 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v22, v10);
          if ( *(_DWORD *)(v24 + 292) )
          {
            EndpointCharacteristics = -2147467259;
          }
          else
          {
            *(_QWORD *)v24 = v18;
            *(_DWORD *)(v24 + 432) = v4;
            *(_DWORD *)(v24 + 296) = 0;
            **a3 = v18;
          }
          if ( EndpointCharacteristics >= 0 )
          {
LABEL_37:
            ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v37);
            if ( EndpointCharacteristics < 0 )
              goto LABEL_41;
LABEL_52:
            if ( v8 )
              operator delete(v8);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
            goto LABEL_55;
          }
        }
        else
        {
          EndpointCharacteristics = -2147467259;
        }
        RmReleaseResources(v18);
        goto LABEL_37;
      }
      v8 = v34;
    }
LABEL_41:
    v25 = 0;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v37,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    if ( !v31 )
      RmReleaseResources(v36);
    v27 = (struct IMMDevice *)*((_QWORD *)this + 15);
    v32[0] = v27;
    while ( v27 && v27 != (struct IMMDevice *)v10 )
    {
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v26,
        v32);
      v27 = v32[0];
    }
    if ( v27 && v27 == (struct IMMDevice *)v10 )
    {
      v25 = 1;
      *(_DWORD *)(ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v26, v10) + 292) = 1;
    }
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v37);
    if ( v25 )
      CConstraintModelResourceManager::ProcessRevokedResources(this);
    goto LABEL_52;
  }
LABEL_55:
  if ( !*((_DWORD *)a3 + 118)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddID(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, v4, 0, **a3, EndpointCharacteristics);
  }
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
  return (unsigned int)EndpointCharacteristics;
}
