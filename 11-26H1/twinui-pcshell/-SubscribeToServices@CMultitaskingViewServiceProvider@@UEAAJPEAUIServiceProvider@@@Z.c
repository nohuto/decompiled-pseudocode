/*
 * XREFs of ?SubscribeToServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021F550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CMultitaskingViewServiceProvider::SubscribeToServices(
        CMultitaskingViewServiceProvider *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // r14
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  struct IServiceProviderVtbl *v18; // rax
  int v19; // eax
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF
  __int64 v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 200);
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 25);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v23 = 0LL;
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v9)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v23);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v10);
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    return v8;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), v23);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), v23);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), v23);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), v23);
  lpVtbl = a2->lpVtbl;
  v25 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &SID_VirtualDesktopSwitcher,
          &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589,
          &v25);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v12);
LABEL_7:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    goto LABEL_21;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 72LL))(*((_QWORD *)this + 19), v25);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), *v5);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23), v23);
  v24 = 0LL;
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v13)(
          a2,
          &SID_TouchpadSettingsManager,
          &GUID_6cde4e33_661a_4801_8f97_e9ff66c2443a,
          &v24);
  v8 = v14;
  if ( v14 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19), v24);
    v26 = 0LL;
    v17 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v26);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v17)(
           a2,
           &SID_VirtualDesktopManager,
           &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
           &v26) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v26);
    v18 = a2->lpVtbl;
    v21[0] = 0LL;
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v18->QueryService)(
            a2,
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            v21);
    v8 = v19;
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), v21[0]);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v21);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      v8 = 0;
      goto LABEL_21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v14);
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v8;
}
