/*
 * XREFs of ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800FB118
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1800FA984 (winrt--impl--create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206.c)
 *     ??$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@IEAA?AU?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@2@XZ @ 0x1800FB3AC (--$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@-$root_implements@UTouchKey.c)
 *     ??1?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800FB444 (--1-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellView.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800FB4BC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800FC738 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180292200 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU234@$$QEAU234@@Z @ 0x180568DD0 (--$_Emplace_reallocate@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8t.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x180568EEC (--$_Reallocate@$0A@@-$vector@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@.c)
 *     ?InputGestureStarted@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShellViewGestureReportedArgs@2345@@Foundation@Windows@3@@Z @ 0x180569AD8 (-InputGestureStarted@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellVie_ea_180569AD8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGestureManager::DelayInitialize(TouchEdgeGestureManager *this)
{
  struct wil::details::IFailureCallback *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 **v6; // rdi
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  _QWORD *v20; // [rsp+48h] [rbp-C0h] BYREF
  TouchEdgeGestureManager *v21; // [rsp+50h] [rbp-B8h] BYREF
  TouchEdgeGestureManager *v22; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v25[3]; // [rsp+78h] [rbp-90h] BYREF
  char v26; // [rsp+90h] [rbp-78h]
  char v27[48]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v28[7]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v29; // [rsp+100h] [rbp-8h]

  v2 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  this,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v26 = 0;
  LODWORD(v25[0]) = 0;
  v25[1] = "TouchEdgeGestureManager::DelayInitialize";
  v25[2] = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v27,
    v2,
    (struct wil::CallContextInfo *)v25,
    1);
  v21 = this;
  v22 = this;
  v3 = winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___(
         &v22,
         &v21);
  v20 = v3;
  if ( (_QWORD **)((char *)this + 88) == &v20 )
  {
    if ( v3 )
      winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v20);
  }
  else
  {
    winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((char *)this + 88);
    *((_QWORD *)this + 11) = v3;
  }
  v28[0] = off_1806FB9E0;
  v28[1] = this;
  v29 = v28;
  TouchEdgeGestureProcessor::Initialize((char *)this + 96, *((_QWORD *)this + 7), v28);
  if ( v29 )
  {
    v4 = v28;
    LOBYTE(v4) = v29 != v28;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v29 + 32LL))(v29, v4);
  }
  v5 = *((_QWORD *)this + 46);
  v23 = v5;
  if ( v5 > (__int64)(*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) >> 4 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    ____Reallocate__0A____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAXAEA_K_Z(
      (char *)this + 416,
      &v23);
  }
  v6 = (__int64 **)*((_QWORD *)this + 45);
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
  {
    winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
      (char *)this + 24,
      &v16);
    v8 = v16;
    v16 = 0LL;
    v18 = v8;
    LODWORD(v19) = *((_DWORD *)i + 4);
    v17 = &v18;
    v17 = operator new(0x20uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v17 + 1));
    v9 = v18;
    v18 = 0LL;
    *(_QWORD *)(v10 + 16) = v9;
    *(_DWORD *)(v10 + 24) = v19;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *(_QWORD *)v10 = off_1806EF978;
    v17 = (_QWORD *)v10;
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v18);
    v12 = (_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::InputGestureStarted(
                      i + 3,
                      v24,
                      v11,
                      &v17);
    v13 = v12;
    v14 = (_QWORD *)*((_QWORD *)this + 53);
    if ( v14 == *((_QWORD **)this + 54) )
    {
      ____Emplace_reallocate_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt_____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU234___QEAU234__Z(
        (char *)this + 416,
        v14,
        v12);
    }
    else
    {
      v15 = *v12;
      *v13 = 0LL;
      *v14 = v15;
      v14[1] = v13[1];
      *((_QWORD *)this + 53) += 16LL;
    }
    __1__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ(v24);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v17);
    if ( v16 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v25);
}
