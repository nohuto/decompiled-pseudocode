/*
 * XREFs of ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4
 * Callers:
 *     ?Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z @ 0x1800F4340 (-Process@ReacquireResourceGroupWorkItem@@UEAAXPEAVCConstraintModelResourceManager@@@Z.c)
 * Callees:
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18000990C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1800CFC30 (WPP_SF_dd.c)
 *     ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800F08F8 (--0ResourceHandleInfo@@QEAA@XZ.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800F0EC4 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x1800F3460 (-GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_Re.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800F4ABC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800F5180 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     WPP_SF_ddD @ 0x1800F604C (WPP_SF_ddD.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A2B8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CConstraintModelResourceManager::DoReacquireResourceGroup(
        CConstraintModelResourceManager *this,
        __int64 a2,
        struct ReacquireResourceHandleInfo *a3)
{
  int EndpointCharacteristics; // edi
  int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // rcx
  struct _ResourceInfo *v10; // r14
  struct _ResourceInfo *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int *v16; // [rsp+20h] [rbp-E0h]
  struct _ResourceInfo *v17; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v18; // [rsp+48h] [rbp-B8h] BYREF
  struct CEndpointCharacteristics *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v20[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v22; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __m128i v26; // [rsp+B0h] [rbp-50h]
  __int128 v27; // [rsp+C0h] [rbp-40h]
  __m128i v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int128 v31; // [rsp+F0h] [rbp-10h]
  _BYTE v32[12]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 v33[128]; // [rsp+10Ch] [rbp+Ch] BYREF
  struct _GUID v34; // [rsp+20Ch] [rbp+10Ch]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // [rsp+220h] [rbp+120h]
  unsigned int v36; // [rsp+2B8h] [rbp+1B8h]
  __int64 v37; // [rsp+2C0h] [rbp+1C0h] BYREF

  EndpointCharacteristics = 0;
  v6 = 0;
  ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v32);
  v7 = -1;
  LODWORD(v18) = -1;
  v23 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v23) = v8;
  v25 = 0LL;
  v26 = si128;
  LOWORD(v25) = v8;
  v27 = 0LL;
  v28 = si128;
  LOWORD(v27) = v8;
  v29 = v8;
  v30 = v8;
  v31 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v20,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, -1);
  }
  if ( !*((_DWORD *)a3 + 118) )
  {
    if ( *((_QWORD *)a3 + 58) )
    {
      LODWORD(v17) = 0;
      EndpointInfo::operator=((EndpointInfo *)&v23, (__int64)a3 + 320);
      CConstraintModelResourceManager::GetEndpointStatus(
        this,
        (const struct EndpointInfo *)&v23,
        (int *)&v17,
        (unsigned int *)&v18);
      v7 = (unsigned int)v18;
      if ( (_DWORD)v17 )
      {
        if ( (_DWORD)v18 != *(_DWORD *)(*((_QWORD *)a3 + 58) + 16LL) )
        {
          v6 = 1;
          ResourceHandleInfo::operator=((__int64)v32, (__int64)a3 + 16);
        }
      }
    }
  }
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v20);
  if ( v6 )
  {
    v19 = 0LL;
    EndpointCharacteristics = GetEndpointCharacteristics(v33, 0, &v19);
    LODWORD(v17) = 0;
    v10 = 0LL;
    v20[0] = 0LL;
    if ( EndpointCharacteristics >= 0 )
    {
      v18 = 0LL;
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v19 + 5, &v18);
      v22 = v34;
      EndpointCharacteristics = CConstraintModel::GetStreamResourceConsumption(
                                  *((CConstraintModel **)this + 7),
                                  v18,
                                  &v22,
                                  v35,
                                  (unsigned int *)&v17,
                                  v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      v10 = v20[0];
    }
    v11 = 0LL;
    v17 = 0LL;
    if ( EndpointCharacteristics >= 0 )
    {
      v16 = (unsigned int *)&v17;
      EndpointCharacteristics = CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(v9, v36, v10);
      if ( EndpointCharacteristics < 0 )
      {
        v11 = v17;
      }
      else
      {
        v20[0] = 0LL;
        v11 = v17;
        EndpointCharacteristics = CConstraintModelResourceManager::ReacquireResourceHandle(
                                    this,
                                    *(_QWORD *)(v37 + 24),
                                    v17,
                                    1u,
                                    v7,
                                    0LL,
                                    (unsigned __int64 *)v20);
        if ( EndpointCharacteristics >= 0 )
        {
          ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
            (__int64)&v22,
            (struct _RTL_CRITICAL_SECTION *)this + 2);
          v12 = v37;
          *(struct _ResourceInfo **)(v37 + 24) = v20[0];
          *(_DWORD *)(v12 + 16) = v7;
          ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v22);
LABEL_19:
          if ( v10 )
            operator delete(v10);
          if ( v11 )
            operator delete(v11);
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v37);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
          goto LABEL_24;
        }
      }
    }
    CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(this, (struct EndpointInfo *)&v23, 1);
    goto LABEL_19;
  }
LABEL_24:
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a3 + 58);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v16) = *((_DWORD *)a3 + 118);
    WPP_SF_ddD(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, v7, v16, EndpointCharacteristics);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v23);
  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)v32);
  return (unsigned int)EndpointCharacteristics;
}
