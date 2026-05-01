/*
 * XREFs of ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x180109074
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1800812AC (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x180109174 (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180109F70 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18010A0B0 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2ac7e78171f5987cb68832f690693247__void_ @ 0x1802C332C (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_2ac7e78171f5987cb68832.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x180363940 (_lambda_bf3a05332e284c078092dab55d26056a_--_lambda_bf3a05332e284c078092dab55d26056a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::SubscribeToWNFForBackgroundImage(wil::details **this, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details *v5; // rcx
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details *v8; // [rsp+20h] [rbp-49h] BYREF
  __int64 v9; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v11[112]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+47h]

  LOBYTE(a2) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
    &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    a2);
  v9 = 0LL;
  wil::details::GetWeakReference<CVirtualDesktopManager>(this, &v9);
  v3 = lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(v10, this, &v9);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2ac7e78171f5987cb68832f690693247__void_(
    v11,
    v3);
  v8 = 0LL;
  v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
         &WNF_SHEL_BACKGROUND_IMAGE_CHANGED,
         v11,
         0xFFFFFFFFLL,
         &v8);
  v5 = 0LL;
  if ( v4 >= 0 )
    v5 = v8;
  v8 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 22,
    &v8);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v6);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
