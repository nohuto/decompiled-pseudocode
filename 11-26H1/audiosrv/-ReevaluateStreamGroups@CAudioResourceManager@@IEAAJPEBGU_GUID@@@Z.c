/*
 * XREFs of ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800CA7C0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_::_Do_call @ 0x1800CC410 (std--_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180002958 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045598 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x18008BAD0 (-ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::ReevaluateStreamGroups(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int EndpointStore; // eax
  unsigned int v10; // ebx
  struct CEndpointStore *v11; // rbx
  __int64 v12; // rcx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 *i; // rbx
  __int64 *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-29h] BYREF
  struct CEndpointStore *v21; // [rsp+38h] [rbp-21h] BYREF
  struct IStreamGroupProxy *v22; // [rsp+40h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-11h] BYREF
  int v24[4]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v25; // [rsp+60h] [rbp+7h] BYREF
  __int64 v26; // [rsp+70h] [rbp+17h]
  __int128 v27; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v6 = (RTL_SRWLOCK *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( LODWORD(v6->Ptr) > 4 && tlgKeywordOn((__int64)v6, 512LL) )
  {
    v21 = (struct CEndpointStore *)a3;
    *(_QWORD *)v24 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
      (int)v6,
      (int)&unk_1801A2D4D,
      v7,
      v8,
      (const wchar_t **)v24,
      (__int64 *)&v21);
  }
  v21 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v6, a2, &v21);
  v10 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE42,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_22;
  }
  v11 = v21;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v21 + 13) + 128LL))(
    *((_QWORD *)v21 + 13),
    &v23);
  v25 = 0LL;
  v26 = 0LL;
  v12 = *((_QWORD *)v11 + 13);
  *(struct _GUID *)v24 = *a3;
  v10 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, int *, __int128 *))(*(_QWORD *)v12 + 32LL))(
          v12,
          a2,
          v24,
          &v25);
  if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2147023728 )
  {
LABEL_8:
    std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)&v25);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
    goto LABEL_22;
  }
  v27 = 0LL;
  v28 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v27);
  v10 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v27);
    goto LABEL_8;
  }
  v15 = (__int64 *)*((_QWORD *)&v25 + 1);
  for ( i = (__int64 *)v25; i != v15; ++i )
  {
    v16 = *i;
    *(_QWORD *)v24 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v20 = 0LL;
    v22 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v24, (__int64 *)&v20) >= 0 )
    {
      if ( v20 )
      {
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v20, (__int64 *)&v22) >= 0 )
        {
          v17 = CAudioResourceManager::ReevaluateStreamsOnStreamGroup(
                  (CAudioResourceManager *)((char *)this + 8),
                  (struct EndpointCharacteristicsDescriptor *)&v27,
                  v22);
          v18 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xE51,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v17);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v24);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v27);
            std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)&v25);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
            v10 = v18;
            goto LABEL_22;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v24);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v27);
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)&v25);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  v10 = 0;
LABEL_22:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v21);
  return v10;
}
