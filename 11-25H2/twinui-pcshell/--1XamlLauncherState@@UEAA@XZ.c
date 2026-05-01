/*
 * XREFs of ??1XamlLauncherState@@UEAA@XZ @ 0x1801807C0
 * Callers:
 *     ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180180780 (--_EXamlLauncherState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x1800151A4 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180180BDC (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180181BD4 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180181C0C (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802C4D34 (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C74B4 (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802CD5D0 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF308 (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 */

void __fastcall XamlLauncherState::~XamlLauncherState(XamlLauncherState *this)
{
  struct _TP_TIMER *v2; // rcx
  struct _TP_TIMER *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details *v9; // rcx

  *(_QWORD *)this = &XamlLauncherState::`vftable';
  *((_QWORD *)this + 3) = &XamlLauncherState::`vftable'{for `IXamlLauncherState'};
  *((_QWORD *)this + 4) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 5) = &XamlLauncherState::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 6) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  XamlLauncherState::CancelStartTelemetryTimeout(this, 0);
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  XamlLauncherState::CancelCortanaTelemetryTimeout(this);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 143);
  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset((char *)this + 1096, 0LL);
  WindowsDeleteString(*((HSTRING *)this + 136));
  *((_QWORD *)this + 136) = 0LL;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 131);
  if ( v2 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 130);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 129);
  if ( v4 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 128);
  if ( v5 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 127);
  if ( v6 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v6);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 126);
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>((char *)this + 976);
  wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>((char *)this + 968);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((XamlLauncherState *)((char *)this + 640));
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((XamlLauncherState *)((char *)this + 312));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 36);
  v9 = (wil::details *)*((_QWORD *)this + 34);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
