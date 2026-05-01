/*
 * XREFs of ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A520C
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1802A5164 (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ?PinManagerCreated@PinManagerTelemetry@@SAXXZ @ 0x18028FE0C (-PinManagerCreated@PinManagerTelemetry@@SAXXZ.c)
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802A75BC (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 *     ??0PinHistory@@QEAA@XZ @ 0x1805BF058 (--0PinHistory@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinManager(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // rbx
  std::_Ref_count_base *v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ITabletModePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v3 = (RTL_SRWLOCK *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component(
    (winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 16),
    a2);
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  v3->Ptr = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::PinManager::`vftable'{for `winrt::immersive_shell_component'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  PinHistory::PinHistory((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 128));
  PinManagerTelemetry::PinManagerCreated();
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    v3,
    (__int128 *)&GUID_a5c8d635_b4ed_452b_8109_9501781096d1);
  std::make_shared__anonymous_namespace_::PinConsentPromptManager_(v6);
  *((_QWORD *)this + 13) = v6[0];
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = v6[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return this;
}
