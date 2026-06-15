/*
 * XREFs of ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001E598 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18001DBC0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@XZ @ 0x18005E39C (--$make_shared@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180061DB4 (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_262b589463239528202aaef0d25d8228__0_ @ 0x180110744 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_262b589463239528202aaef0.c)
 *     _lambda_262b589463239528202aaef0d25d8228_::_lambda_262b589463239528202aaef0d25d8228_ @ 0x180110A4C (_lambda_262b589463239528202aaef0d25d8228_--_lambda_262b589463239528202aaef0d25d8228_.c)
 *     _lambda_262b589463239528202aaef0d25d8228_::__lambda_262b589463239528202aaef0d25d8228_ @ 0x180110D3C (_lambda_262b589463239528202aaef0d25d8228_--__lambda_262b589463239528202aaef0d25d8228_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PublishApoTelemetry(CEndpointStoreCache *a1, struct _GUID *a2)
{
  int EndpointStore; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // edx
  __int64 v9; // rdx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r9
  struct CEndpointStore *v18; // [rsp+20h] [rbp-49h] BYREF
  __int128 v19; // [rsp+28h] [rbp-41h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v21[64]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v18 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v18);
  v5 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    return v5;
  }
  else
  {
    v6 = (volatile signed __int32 *)v18;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)v18 + 65, 1, 0) )
    {
      v19 = 0LL;
      *(_OWORD *)v20 = 0LL;
      std::shared_ptr<std::function<void (void)>>::operator=(&v19, v20);
      v10 = v20[1];
      if ( v20[1] )
        std::_Ref_count_base::_Decref(v20[1]);
      if ( !(_QWORD)v19 )
      {
        v11 = std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,>(v20);
        std::shared_ptr<std::function<void (void)>>::operator=(&v19, v11);
        v10 = v20[1];
        if ( v20[1] )
          std::_Ref_count_base::_Decref(v20[1]);
      }
      v12 = _AllocString<CTCoAllocPolicy>(v10, v9, a1, v19);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x552,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v12);
        wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(&v19);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
        return v13;
      }
      SerialWorkQueue = GetSerialWorkQueue();
      v15 = lambda_262b589463239528202aaef0d25d8228_::_lambda_262b589463239528202aaef0d25d8228_(
              v22,
              &v19,
              a2,
              SerialWorkQueue);
      v16 = (__int64 *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_262b589463239528202aaef0d25d8228__0_(
                         v21,
                         v15);
      CSerialWorkQueue::QueueWorkItem(v17, v16);
      lambda_262b589463239528202aaef0d25d8228_::__lambda_262b589463239528202aaef0d25d8228_(v22);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(&v19);
    }
    if ( v6 )
    {
      do
        v7 = *((_DWORD *)v6 + 3);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 3, v7 - 1, v7) );
      if ( v7 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v6 + 24LL))(
          v6,
          1LL,
          0x7FFFFFFFLL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                            + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 0LL;
  }
}
