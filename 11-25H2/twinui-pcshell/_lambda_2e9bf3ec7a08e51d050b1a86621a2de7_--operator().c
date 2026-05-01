/*
 * XREFs of _lambda_2e9bf3ec7a08e51d050b1a86621a2de7_::operator() @ 0x180200CAC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_2e9bf3ec7a08e51d050b1a86621a2de7___::Invoke @ 0x1806894B0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--_ea_1806894B0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??$query@UIXamlAltTabViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlAltTabViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x180200D54 (--$query@UIXamlAltTabViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_polic.c)
 *     ?revoke@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1802CE268 (-revoke@-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8typ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_2e9bf3ec7a08e51d050b1a86621a2de7_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAltTabViewController__, a1);
  v1 = __abi_winrt_ptr_ctor(v4[0]);
  v4[1] = v1;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4[0]);
  if ( v1 )
  {
    v2 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlAltTabViewHostInternal>(
                     v1 + 56,
                     v4);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
    if ( v4[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4[0] + 16LL))(v4[0]);
    _revoke___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXXZ(v1 + 320);
  }
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v1);
}
