/*
 * XREFs of ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029E754
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18029E6AC (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ?PinManagerCreated@PinManagerTelemetry@@SAXXZ @ 0x1802835B0 (-PinManagerCreated@PinManagerTelemetry@@SAXXZ.c)
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802A1574 (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 *     ??0PinHistory@@QEAA@XZ @ 0x1805E3030 (--0PinHistory@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinManager(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rbx
  std::_Ref_count_base *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ITabletModePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component(
    (winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 16),
    a2,
    a3);
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  v4->Ptr = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::PinManager::`vftable'{for `winrt::immersive_shell_component'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  PinHistory::PinHistory((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 128));
  PinManagerTelemetry::PinManagerCreated();
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    v4,
    (__int128 *)&GUID_a5c8d635_b4ed_452b_8109_9501781096d1);
  std::make_shared__anonymous_namespace_::PinConsentPromptManager_(v7);
  *((_QWORD *)this + 13) = v7[0];
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = v7[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return this;
}
