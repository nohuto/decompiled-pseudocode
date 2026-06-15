/*
 * XREFs of ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180157430
 * Callers:
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x180155450 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800844D0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x1800A973C (--1-$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AAE78 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800BE8EC (--$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRe.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800CC874 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_f74592632540feccec9f4b5e07595a4c__void_ @ 0x180153BD8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_f74592632540feccec9f4b.c)
 *     _lambda_f74592632540feccec9f4b5e07595a4c_::_lambda_f74592632540feccec9f4b5e07595a4c_ @ 0x1801546BC (_lambda_f74592632540feccec9f4b5e07595a4c_--_lambda_f74592632540feccec9f4b5e07595a4c_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RegisterForShellReadyNotifications(wil::details **this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details **v6; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details *v9; // [rsp+20h] [rbp-59h] BYREF
  __int64 v10; // [rsp+28h] [rbp-51h] BYREF
  AtmosCheck *v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v14[120]; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v11 = (AtmosCheck *)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
  v10 = 0LL;
  v9 = (wil::details *)&v10;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v9);
  v3 = Microsoft::WRL::AsWeak<IAudioModeEffectsWatcher>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 3180LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64 *))(*(_QWORD *)g_PolicyManager + 392LL))(
         g_PolicyManager,
         &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 3183LL;
    goto LABEL_5;
  }
  if ( !this[30] )
  {
    lambda_f74592632540feccec9f4b5e07595a4c_::_lambda_f74592632540feccec9f4b5e07595a4c_(&v12, &v10, (__int64)this);
    wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_f74592632540feccec9f4b5e07595a4c__void_((__int64)v14);
    v6 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                            &v9,
                            (__int64)&v13,
                            (__int64)v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 30,
      v6);
    if ( v9 )
      wil::details::delete_wnf_subscription_state(v9, v7);
    wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>((__int64)v14);
  }
  v4 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  return v4;
}
