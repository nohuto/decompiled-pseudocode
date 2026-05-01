/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1804BB0CC
 * Callers:
 *     ?MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x1804BBA40 (-MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18049DDD0 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x1804BB3FC (--$Make@V-$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Window.c)
 *     ??1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ @ 0x1804BB5D4 (--1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem,IVirtualDesktopItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        ...)
{
  __int64 *v1; // rdi
  __int64 *v2; // rsi
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // r14d
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  DWORD CurrentThreadId; // eax
  __int64 (__fastcall *v11)(__int64); // [rsp+30h] [rbp-20h] BYREF
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v15; // [rsp+88h] [rbp+38h] BYREF
  va_list va; // [rsp+88h] [rbp+38h]
  __int64 *v17; // [rsp+90h] [rbp+40h]
  __int64 *v18; // [rsp+98h] [rbp+48h]
  va_list va1; // [rsp+A0h] [rbp+50h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v15 = va_arg(va1, volatile signed __int32 *);
  v17 = va_arg(va1, __int64 *);
  v18 = va_arg(va1, __int64 *);
  v1 = v18;
  v2 = v17;
  v4 = *a1;
  if ( v4 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v4);
    v11 =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}};
    v12 = *a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v13 = *v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v14 = *v1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v6 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>,_lambda_c2a2628a81f3a0afe82e0d81e4960563_>(
                      (volatile signed __int32 **)va,
                      &v11);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(ControllerApartment, 0LL, CurrentThreadId);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    _lambda_c2a2628a81f3a0afe82e0d81e4960563_::~_lambda_c2a2628a81f3a0afe82e0d81e4960563_((_lambda_c2a2628a81f3a0afe82e0d81e4960563_ *)&v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
}
