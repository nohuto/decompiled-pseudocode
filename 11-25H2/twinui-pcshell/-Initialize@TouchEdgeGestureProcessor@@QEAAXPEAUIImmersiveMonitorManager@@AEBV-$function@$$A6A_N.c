/*
 * XREFs of ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800FB118 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800FB7F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?_Swap@?$_Func_class@_N$$V@std@@IEAAXAEAV12@@Z @ 0x1800FBB48 (-_Swap@-$_Func_class@_N$$V@std@@IEAAXAEAV12@@Z.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x1800FBCB8 (-Completed@-$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Com.c)
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x1800FC1A0 (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800FC364 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800FC738 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_c7bdcc8427e48cc0baee46c116b31384___ @ 0x1802919BC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Internal--Input--_ea_1802919BC.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1802B26C8 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGestureProcessor::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct wil::details::IFailureCallback *v6; // rax
  TouchEdgeGestureProcessor *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  _BYTE *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rax
  wil::details **wnf; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  wil::details *v15; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  const char *v17; // [rsp+38h] [rbp-C8h]
  __int64 v18; // [rsp+40h] [rbp-C0h]
  char v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[48]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[56]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v22; // [rsp+B8h] [rbp-48h]
  _BYTE v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v24[13]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v25; // [rsp+130h] [rbp+30h]

  v6 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  a1,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v19 = 0;
  v16 = 0;
  v17 = "TouchEdgeGestureProcessor::Initialize";
  v18 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v20,
    v6,
    (struct wil::CallContextInfo *)&v16,
    1);
  if ( *(_QWORD *)a1 != a2 )
  {
    if ( *(_QWORD *)a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1);
    *(_QWORD *)a1 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  if ( TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed(v7) )
  {
    v22 = 0LL;
    v8 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
    if ( v8 )
      v22 = (_BYTE *)(**v8)(v8, v21);
    std::_Func_class<bool,>::_Swap(v21, a1 + 24);
    if ( v22 )
    {
      v9 = v21;
      LOBYTE(v9) = v22 != v21;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v22 + 32LL))(v22, v9);
    }
    v10 = (__int64 *)winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)&v15);
    v11 = (__int64 *)winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
                       (const struct winrt::Windows::UI::Internal::Input::InputSite *)&v14,
                       v10);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 104), v11);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
    TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(a1, *(unsigned int *)(a1 + 92));
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_c7bdcc8427e48cc0baee46c116b31384___(
      &v14,
      a1);
    winrt::impl::consume_Windows_UI_Composition_ICompositionCommitBatch<winrt::Windows::UI::Composition::ICompositionCommitBatch>::Completed(
      a1 + 104,
      &v15,
      &v14);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    v24[0] = off_1806FC7B0;
    v24[1] = a1;
    v25 = v24;
    wnf = (wil::details **)wil::make_wnf_subscription<unsigned long>(&v15, &WNF_SHEL_LOCKSCREEN_ACTIVE, v23);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      (wil::details **)(a1 + 16),
      wnf);
    if ( v15 )
      wil::details::delete_wnf_subscription_state(v15, v13);
    if ( v25 )
      (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v16);
}
