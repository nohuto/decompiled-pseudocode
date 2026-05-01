/*
 * XREFs of ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x1800A194C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1800A1338 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x1800A1A7C (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A2584 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800BF6E4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::SubscribeToWNFForBackgroundImage(CVirtualDesktopManager *this, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  wil::details *v5; // rcx
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details *v8; // [rsp+20h] [rbp-49h] BYREF
  __int64 v9; // [rsp+28h] [rbp-41h] BYREF
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v12[13]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v13; // [rsp+A8h] [rbp+3Fh]

  LOBYTE(a2) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
    &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    a2);
  v10 = 0LL;
  wil::details::GetWeakReference<CVirtualDesktopManager>(this, &v10);
  v8 = this;
  v3 = v10;
  v9 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12[0] = &off_180704378;
  v12[1] = this;
  v9 = 0LL;
  v12[2] = v3;
  v13 = v12;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
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
    (char *)this + 176,
    &v8);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v6);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
