/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B2A00
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804A55D0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800F5C60 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1802BDAF8 (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804AD0EC (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804B24C4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e6361.c)
 *     _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x1804B2640 (_lambda_f4067639e63611d5d8388fe1412d05ee_--__lambda_f4067639e63611d5d8388fe1412d05ee_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(SwitchItemTelemetry *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rsi
  HANDLE PropW; // r14
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, HANDLE, volatile signed __int32 **); // rbx
  UINT v10; // eax
  const char *v11; // r9
  IUnknown *v12; // rbx
  void **v13; // rax
  unsigned __int16 **v14; // r8
  int AppId; // eax
  volatile signed __int32 **v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rcx
  DWORD CurrentThreadId; // eax
  IUnknown *v20; // [rsp+30h] [rbp-20h] BYREF
  IUnknown *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  volatile signed __int32 *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF
  ApplicationViewHelpers *v26; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v27 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v4((SwitchItemTelemetry *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v27);
  (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v27 + 24LL))(v27, &v26);
  if ( *((_QWORD *)this + 8) )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v26,
                            v5);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v24 = 0LL;
      v8 = *((_QWORD *)this + 8);
      v9 = *(int (__fastcall **)(__int64, HANDLE, volatile signed __int32 **))(*(_QWORD *)v8 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      if ( v9(v8, PropW, &v24) >= 0 )
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v26, &v24);
      v10 = dword_18089C8D0;
      if ( dword_18089C8D0
        || (v10 = RegisterWindowMessageW(L"TabSwitch"), (dword_18089C8D0 = v10) != 0)
        || (wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x72,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
              v11),
            (v10 = dword_18089C8D0) != 0) )
      {
        PostMessageW(WindowForView, v10, 0LL, 0LL);
        WindowTabHostTelemetry::WindowTabHostTabSwitchedToViaAltTab();
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      WindowTabHostTelemetry::WindowTabHostWindowSwitchedToViaAltTab();
    }
  }
  v12 = (IUnknown *)*((_QWORD *)this + 4);
  v20 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v25 = 0LL;
  v13 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v25);
  AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)v13, v14);
  if ( AppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)AppId);
  CoAllowSetForegroundWindow(v12, 0LL);
  v21 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v22[0] = (__int64)v26;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
  v22[1] = v25;
  v25 = 0LL;
  v16 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___(
          &v24,
          (volatile signed __int32 *)&v21);
  v17 = *v16;
  *v16 = 0LL;
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v18);
  }
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v17 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
  lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_((__int64)&v21);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
}
