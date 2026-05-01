/*
 * XREFs of ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x18008A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003C030 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$?0V_lambda_1a746a469b397f96443d5d0dd1083225_@@@?$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_1a746a469b397f96443d5d0dd1083225_@@@Z @ 0x18028F040 (--$-0V_lambda_1a746a469b397f96443d5d0dd1083225_@@@-$CTaskWrapper@V_lambda_1a746a469b397f96443d5d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::ViewVirtualDesktopChanged(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int CallbackArray; // eax
  int v7; // ebx
  unsigned int v8; // ebx
  void *v9; // rax
  __int64 v10; // rsi
  struct IObjectArray *v11; // rcx
  struct IObjectArray *v13; // rcx
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-20h] BYREF
  struct IObjectArray *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IObjectArray *v18; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v4 = v19;
  if ( v19 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = v19;
    }
    v5 = v4;
    v4 = a2;
    v19 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = v19;
    }
  }
  v19 = 0LL;
  v20 = v4;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 56), &v18);
  v7 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v13->lpVtbl->Release)(v13);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v20);
  }
  else
  {
    v14 =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}};
    v15 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v16 = v20;
    v20 = 0LL;
    v8 = *(_DWORD *)(a1 + 96);
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
      v10 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_1a746a469b397f96443d5d0dd1083225_>::CTaskWrapper<_lambda_1a746a469b397f96443d5d0dd1083225_>(
              v9,
              &v14);
    else
      v10 = 0LL;
    v7 = SHTaskPoolQueueTask(0LL, 2LL, v8);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v11->lpVtbl->Release)(v11);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  }
  return (unsigned int)v7;
}
