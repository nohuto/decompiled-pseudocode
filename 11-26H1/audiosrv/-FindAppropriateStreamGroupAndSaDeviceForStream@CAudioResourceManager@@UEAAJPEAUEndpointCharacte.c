/*
 * XREFs of ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800C75F0
 * Callers:
 *     _lambda_bbb7f9abdd2f1fd780b44bf41bd339bf_::operator() @ 0x1800C4FBC (_lambda_bbb7f9abdd2f1fd780b44bf41bd339bf_--operator().c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800021D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x180002AE0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061E24 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180079FA8 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ?ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z @ 0x1800D43C0 (-ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
        RTL_SRWLOCK *this,
        CEndpointCharacteristics **a2,
        const unsigned __int16 *a3,
        struct IAudioStreamInfo *a4)
{
  int EndpointStore; // eax
  unsigned int v9; // ebx
  PVOID Ptr; // rcx
  struct CEndpointStore *v11; // rdi
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct IStreamGroupProxy **); // rbx
  __int64 (__fastcall *v16)(struct IAudioStreamInfo *, struct IStreamGroupProxy **); // rbx
  int v17; // eax
  __int64 v18; // rdx
  struct AudioSrvTelemetryProvider *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  int v26; // ecx
  struct IStreamGroupProxy *v27; // rbx
  __int64 (__fastcall *v28)(struct IStreamGroupProxy *, __int64 *); // rsi
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  char v35; // r15
  int v36; // eax
  __int64 (__fastcall *v37)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, _QWORD, int, __int128 *, __int64, __int64 *); // rsi
  __int64 v38; // rbx
  int v39; // eax
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  struct IStreamGroupProxy *v45; // [rsp+58h] [rbp-69h] BYREF
  struct IStreamGroupProxy *v46; // [rsp+60h] [rbp-61h] BYREF
  void *v47; // [rsp+68h] [rbp-59h] BYREF
  __int64 v48; // [rsp+70h] [rbp-51h] BYREF
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+78h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+80h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+88h] [rbp-39h] BYREF
  __int64 v52; // [rsp+90h] [rbp-31h] BYREF
  __int64 v53; // [rsp+98h] [rbp-29h] BYREF
  struct CEndpointStore *v54; // [rsp+A0h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v55; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-1h]
  struct IStreamGroupProxy *v58; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v59; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 *v60; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v61; // [rsp+E0h] [rbp+1Fh] BYREF
  char v62; // [rsp+E8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v54 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a3, &v54);
  v9 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    Ptr = this[6].Ptr;
    v11 = v54;
    (*(void (__fastcall **)(PVOID, struct _RTL_CRITICAL_SECTION **, struct CEndpointStore *))(*(_QWORD *)Ptr + 80LL))(
      Ptr,
      &v50,
      v54);
    v47 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     *a2,
                                     &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                     &v47);
    v9 = CustomResourceManagerService;
    if ( CustomResourceManagerService < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
LABEL_5:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
      goto LABEL_55;
    }
    v49 = 0LL;
    if ( v47 )
    {
      v13 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v47 + 104LL))(
                                               v47,
                                               &v55);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
        &v49,
        v13);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v55);
    }
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v11 + 13) + 128LL))(
      *((_QWORD *)v11 + 13),
      &v51);
    v46 = 0LL;
    v14 = *((_QWORD *)v11 + 13);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IStreamGroupProxy **))(*(_QWORD *)v14 + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v46);
    v9 = v15(v14, *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x268), &v46);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v9);
LABEL_11:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v51);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v49);
      goto LABEL_5;
    }
    v45 = 0LL;
    v16 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct IStreamGroupProxy **))(*(_QWORD *)a4 + 120LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v45);
    v17 = v16(a4, &v45);
    v9 = v17;
    if ( v17 < 0 )
    {
      v18 = 3545LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_15:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      goto LABEL_11;
    }
    if ( v46 )
    {
      v19 = AudioSrvTelemetryProvider::Instance();
      v20 = (_DWORD *)*((_QWORD *)v19 + 1);
      if ( *v20 > 4u && tlgKeywordOn(*((_QWORD *)v19 + 1), 512LL) )
      {
        v55 = (struct _RTL_CRITICAL_SECTION *)a3;
        v58 = v45;
        v59 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 80LL))(a4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          (int)v20,
          (int)&unk_1801A2E6F,
          v21,
          v22,
          (__int64)&v59,
          (__int64)&v58,
          (const wchar_t **)&v55);
      }
      if ( v46 != v45 )
      {
        v17 = CAudioStream::ConnectToNewStreamGroup(
                (CAudioStream *)(((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)),
                v46);
        v9 = v17;
        if ( v17 < 0 )
        {
          v18 = 3559LL;
          goto LABEL_14;
        }
      }
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v51);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v49);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
      v9 = 0;
      goto LABEL_55;
    }
    if ( (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v45 + 432LL))(v45) == 1 )
    {
      v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v23 > 4u && tlgKeywordOn((__int64)v23, 512LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v24,
          (int)&unk_1801A2E1A);
      if ( (*(int (__fastcall **)(struct IStreamGroupProxy *, unsigned __int64))(*(_QWORD *)v45 + 448LL))(
             v45,
             (((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 576) >= 0 )
        goto LABEL_28;
    }
    v25 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 512LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v26,
        (int)&unk_1801A2DD4);
    v48 = 0LL;
    v27 = v45;
    v28 = *(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)v45 + 224LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v48);
    v29 = v28(v27, &v48);
    v9 = v29;
    if ( v29 < 0 )
    {
      v30 = (unsigned int)v29;
      v31 = 3586LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v30);
LABEL_35:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
      goto LABEL_15;
    }
    if ( !v48 )
    {
      v9 = -2147418113;
      v30 = 2147549183LL;
      v31 = 3587LL;
      goto LABEL_34;
    }
    v32 = *(_QWORD *)a4;
    v52 = 0LL;
    v33 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v32 + 192))(a4, &v52);
    v9 = v33;
    if ( v33 >= 0 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, _QWORD))(*(_QWORD *)v52 + 72LL))(
              v52,
              a4,
              0LL);
      v9 = v33;
      if ( v33 >= 0 )
      {
        v35 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v45 + 240LL))(v45);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v45);
        v56 = 0LL;
        v57 = 0LL;
        v36 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v48 + 240LL))(v48, &v56);
        v9 = v36;
        if ( v36 >= 0 )
        {
          v53 = 0LL;
          v37 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, _QWORD, int, __int128 *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 56LL);
          v60 = &v53;
          v61 = 0LL;
          v62 = 1;
          v38 = *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x270);
          v39 = (*(__int64 (**)(void))(*(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 8) + 72LL))();
          v9 = v37(
                 g_DeviceGraphManager,
                 a2,
                 *((_QWORD *)v11 + 13),
                 *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x268),
                 v39,
                 &v56,
                 v38,
                 &v61);
          wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v60);
          if ( (v9 & 0x80000000) == 0 )
          {
            v42 = (*(__int64 (__fastcall **)(__int64, __int64, bool, __int128 *, _QWORD))(*(_QWORD *)v53 + 208LL))(
                    v53,
                    v48,
                    v35 == 0,
                    &v56,
                    0LL);
            v9 = v42;
            if ( v42 >= 0 )
            {
              v43 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, __int64, __int64))(*(_QWORD *)v52 + 64LL))(
                      v52,
                      a4,
                      v53,
                      1LL);
              v9 = v43;
              if ( v43 >= 0 )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
                std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v56);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v51);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v49);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
                v9 = 0;
                goto LABEL_55;
              }
              v40 = (unsigned int)v43;
              v41 = 3611LL;
            }
            else
            {
              v40 = (unsigned int)v42;
              v41 = 3609LL;
            }
          }
          else
          {
            v40 = v9;
            v41 = 3607LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v41,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v40);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE0E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v36);
        }
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v56);
        goto LABEL_41;
      }
      v34 = 3592LL;
    }
    else
    {
      v34 = 3590LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33);
LABEL_41:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDBD,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)EndpointStore);
LABEL_55:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v54);
  return v9;
}
