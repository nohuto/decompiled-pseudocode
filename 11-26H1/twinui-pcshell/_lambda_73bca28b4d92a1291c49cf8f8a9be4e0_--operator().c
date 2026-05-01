/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1802F03D0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x1802F2980 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2980.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EE70 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long___lambda_d5477cdde00c396a06f6576e925c03df___ @ 0x1802EF200 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802EF200.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1802F5760 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802F80F4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(__int64 a1, unsigned int a2)
{
  HWND v3; // r15
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v6; // ebx
  HWND v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  __int64 *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v19; // [rsp+90h] [rbp+48h] BYREF
  HWND v20; // [rsp+98h] [rbp+50h] BYREF

  v18 = a2;
  v19 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  v6 = v5(v4, &v19);
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v19,
           &v15);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v19, &v20);
      v3 = v20;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v17 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v8 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    v6 = v9(v8, &v17);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v17, &v20);
      v7 = v20;
    }
  }
  v18 = 0;
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v18);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), (unsigned int)v6);
  }
  else
  {
    v20 = *(HWND *)(a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long___lambda_d5477cdde00c396a06f6576e925c03df___(
            &v15,
            &v20);
    v12 = *v10;
    v16 = *v10;
    *v10 = 0LL;
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v13,
        v11);
    }
    v6 = CAppViewManager::_SwitchAsyncWorker(*(_QWORD *)a1, v3, v7, v18, v17, v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v6;
}
