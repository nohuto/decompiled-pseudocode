/*
 * XREFs of ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800B77DC
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058C020 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800B5FDC (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800B6E40 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ??1?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800B7A74 (--1-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellView.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1801360B0 (winrt--impl--create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18028B044 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x18058CD34 (--$_Reallocate@$0A@@-$vector@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@.c)
 *     ??$emplace_back@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@QEAAAEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@$$QEAU234@@Z @ 0x18058CF28 (--$emplace_back@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@-$a.c)
 *     ?InputGestureStarted@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShellViewGestureReportedArgs@2345@@Foundation@Windows@3@@Z @ 0x18058D898 (-InputGestureStarted@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellVie_ea_18058D898.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGestureManager::DelayInitialize(TouchEdgeGestureManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 **v10; // rdi
  __int64 *i; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // [rsp+28h] [rbp-99h] BYREF
  __int64 v18; // [rsp+30h] [rbp-91h] BYREF
  __int64 v19; // [rsp+38h] [rbp-89h] BYREF
  int v20; // [rsp+40h] [rbp-81h]
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v22[24]; // [rsp+50h] [rbp-71h] BYREF
  int v23; // [rsp+68h] [rbp-59h] BYREF
  const char *v24; // [rsp+70h] [rbp-51h]
  __int64 v25; // [rsp+78h] [rbp-49h]
  char v26; // [rsp+80h] [rbp-41h]
  char v27[48]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v28[7]; // [rsp+B8h] [rbp-9h] BYREF
  _QWORD *v29; // [rsp+F0h] [rbp+2Fh]

  v2 = wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v26 = 0;
  v23 = 0;
  v24 = "TouchEdgeGestureManager::DelayInitialize";
  v25 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v27,
    (struct wil::details::IFailureCallback *)v2,
    (struct wil::CallContextInfo *)&v23,
    1);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v17,
    this);
  v4 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v18,
         v3);
  v6 = winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___(
         v4,
         v5);
  v21 = v6;
  if ( (__int64 *)((char *)this + 88) == &v21 )
  {
    if ( v6 )
      winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v21);
  }
  else
  {
    winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((char *)this + 88);
    *((_QWORD *)this + 11) = v6;
  }
  v7 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                   &v17,
                   this);
  v29 = 0LL;
  v28[0] = off_1807245D0;
  v28[1] = *v7;
  v29 = v28;
  TouchEdgeGestureProcessor::Initialize((__int64)this + 96, *((_QWORD *)this + 7), (__int64)v28);
  if ( v29 )
  {
    v8 = v28;
    LOBYTE(v8) = v29 != v28;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v29 + 32LL))(v29, v8);
  }
  v9 = *((_QWORD *)this + 46);
  v17 = (_QWORD *)v9;
  if ( v9 > (__int64)(*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) >> 4 )
  {
    if ( v9 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    ____Reallocate__0A____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAXAEA_K_Z(
      (char *)this + 416,
      &v17);
  }
  v10 = (__int64 **)*((_QWORD *)this + 45);
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
      (__int64)this + 24,
      &v18);
    v12 = v18;
    v18 = 0LL;
    v19 = v12;
    v20 = *((_DWORD *)i + 4);
    v17 = &v19;
    v17 = operator new(0x20uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v17 + 1));
    v13 = v19;
    v19 = 0LL;
    *(_QWORD *)(v14 + 16) = v13;
    *(_DWORD *)(v14 + 24) = v20;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *(_QWORD *)v14 = off_1807119D8;
    v17 = (_QWORD *)v14;
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v19);
    v16 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::InputGestureStarted(
            i + 3,
            v22,
            v15,
            &v17);
    ___emplace_back_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt_____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__QEAAAEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt____QEAU234__Z(
      (char *)this + 416,
      v16);
    __1__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ(v22);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v17);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v23);
}
