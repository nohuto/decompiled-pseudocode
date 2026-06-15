/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x180074B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18005D434 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180062C3C (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x18007506C (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@347@Z @ 0x18007518C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapper.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18013DD84 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        __int64 a1,
        CEndpointCharacteristics **a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned __int64 *a6,
        __int64 a7,
        char a8,
        char a9,
        _QWORD *a10)
{
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  RTL_SRWLOCK *v13; // rcx
  BOOL v14; // esi
  int EndpointStore; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  struct CEndpointStore *v18; // r13
  char v19; // r14
  unsigned __int64 *v20; // rdi
  int v21; // eax
  int v22; // esi
  int v23; // esi
  __int64 v24; // r8
  int v25; // r9d
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v28; // rax
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-81h] BYREF
  __int64 v34; // [rsp+80h] [rbp-79h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-71h] BYREF
  struct CEndpointStore *v36; // [rsp+90h] [rbp-69h] BYREF
  int v37; // [rsp+98h] [rbp-61h] BYREF
  int v38; // [rsp+9Ch] [rbp-5Dh] BYREF
  __int64 v39; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-39h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp-31h] BYREF
  int v45[4]; // [rsp+D8h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+E8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+47h]
  CEndpointCharacteristics **v48; // [rsp+150h] [rbp+57h] BYREF
  __int64 *v49; // [rsp+158h] [rbp+5Fh] BYREF
  int v50; // [rsp+160h] [rbp+67h] BYREF

  v50 = a4;
  v49 = (__int64 *)a3;
  v48 = a2;
  v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v46 = v12;
  v14 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(*a2);
  v36 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v13, *(const unsigned __int16 **)a3, &v36);
  v16 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    v17 = 3354LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_50:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v36);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v46);
    return v16;
  }
  v18 = v36;
  EndpointStore = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL, _QWORD *))(**((_QWORD **)v36 + 13) + 64LL))(
                    *((_QWORD *)v36 + 13),
                    a3,
                    a5,
                    v14,
                    a10);
  v16 = EndpointStore;
  if ( EndpointStore >= 0 )
    goto LABEL_49;
  if ( EndpointStore != -2005139430 )
  {
    v17 = 3359LL;
    goto LABEL_10;
  }
  v19 = 0;
  v20 = a6;
  if ( *((_BYTE *)a6 + 12) )
  {
    if ( !*a6 )
    {
      v19 = 1;
      *(_OWORD *)v45 = *(_OWORD *)((char *)a6 + 20);
      v21 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, CEndpointCharacteristics **, int *, _QWORD, _DWORD, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager + 96LL))(
              g_AudioResourceManager,
              a2,
              v45,
              *((unsigned int *)a6 + 4),
              *((_DWORD *)a6 + 2),
              a6);
      v22 = v21;
      if ( v21 < 0 )
      {
        if ( v21 != -2005139370 && (unsigned int)(v21 + 2005139335) > 1 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD42,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v21);
        if ( *v20 )
        {
          ReleaseSaDeviceResource(v20);
          *v20 = 0LL;
        }
        v16 = v22;
        goto LABEL_50;
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v18 + 13) + 80LL))(
    *((_QWORD *)v18 + 13),
    &lpCriticalSection);
  v33 = 0LL;
  v39 = *((_QWORD *)v18 + 13);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
  v23 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,EndpointCharacteristicsDescriptor * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,_GUID const * &,_GUID const * &>(
          (unsigned int)&v33,
          (unsigned int)&v49,
          (unsigned int)&v48,
          (unsigned int)&v39,
          (__int64)&a5,
          (__int64)&v50,
          (__int64)v20,
          a7,
          (__int64)&a8,
          (__int64)&a9);
  v24 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v24 > 4u
    && (*(_QWORD *)(v24 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v24 + 24) & 0x400000000000LL) == *(_QWORD *)(v24 + 24) )
  {
    v40 = a3 + 80;
    v37 = *(_DWORD *)(a3 + 8);
    v41 = *(_QWORD *)(a3 + 32);
    v42 = a3 + 48;
    LOWORD(v49) = *(_WORD *)(*(_QWORD *)(a3 + 16) + 2LL);
    v38 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4LL);
    v43 = *(_QWORD *)a3;
    LODWORD(v39) = v23;
    v44 = v33;
    *(_QWORD *)v45 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v24,
      (unsigned int)&unk_1801A634A,
      v24,
      v25,
      (__int64)v45,
      (__int64)&v44,
      (__int64)&v39,
      (__int64)&v43,
      (__int64)&v38,
      (__int64)&v49,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v37,
      (__int64)&v40);
  }
  if ( v23 >= 0 )
  {
    v34 = 0LL;
    v49 = &v34;
    v28 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v49);
    v29 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v33, v28);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v29);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
      if ( v19 && *v20 )
      {
        ReleaseSaDeviceResource(v20);
        *v20 = 0LL;
      }
LABEL_40:
      v16 = v30;
      goto LABEL_50;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)v18 + 13) + 72LL))(
            *((_QWORD *)v18 + 13),
            a3,
            &v34);
    v30 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD60,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v31);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
      if ( v19 && *v20 )
      {
        ReleaseSaDeviceResource(v20);
        *v20 = 0LL;
      }
      goto LABEL_40;
    }
    v32 = v33;
    v33 = 0LL;
    *a10 = v32;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
    if ( v19 && *v20 )
    {
      ReleaseSaDeviceResource(v20);
      *v20 = 0LL;
    }
LABEL_49:
    v16 = 0;
    goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v23);
  v26 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v19 && *v20 )
  {
    ReleaseSaDeviceResource(v20);
    *v20 = 0LL;
  }
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v36);
  if ( v12 )
    LeaveCriticalSection(v12);
  return (unsigned int)v23;
}
