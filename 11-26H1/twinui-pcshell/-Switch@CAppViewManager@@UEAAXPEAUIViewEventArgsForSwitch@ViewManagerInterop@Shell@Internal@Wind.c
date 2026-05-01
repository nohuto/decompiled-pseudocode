/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802F5480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1800902F4 (_lambda_6c2381c8148a5bf607d7998e82322cb8_--__lambda_6c2381c8148a5bf607d7998e82322cb8_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180292E7C (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long___lambda_73bca28b4d92a1291c49cf8f8a9be4e0___ @ 0x1802EEFD8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802EEFD8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 *v4; // rax
  volatile int *v5; // rdx
  struct IAsyncCallback *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v10; // [rsp+28h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v12; // [rsp+68h] [rbp+30h] BYREF
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+40h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this - 32);
  v13 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v9 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v4 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long___lambda_73bca28b4d92a1291c49cf8f8a9be4e0___(
         &v11,
         &v9);
  v6 = (struct IAsyncCallback *)*v4;
  v14 = *v4;
  *v4 = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v7,
      v5);
  }
  v8 = CAppViewManager::_QueueOperation(v3, v6);
  if ( v8 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_((__int64 *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
}
