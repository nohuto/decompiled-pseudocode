/*
 * XREFs of ??1AcrylicPolicyManager@@UEAA@XZ @ 0x1802DA738
 * Callers:
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1802DAA54 (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180286580 (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 */

void __fastcall AcrylicPolicyManager::~AcrylicPolicyManager(
        AcrylicPolicyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 43);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 42);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, a2);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>((wil::details::registry_watcher_state **)this + 41);
  SmartCookie::~SmartCookie((AcrylicPolicyManager *)((char *)this + 200));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>((__int64)this);
}
