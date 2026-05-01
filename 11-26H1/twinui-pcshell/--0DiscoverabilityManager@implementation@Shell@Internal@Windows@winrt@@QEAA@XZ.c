/*
 * XREFs of ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180619D24
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180619988 (--0-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Intern.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180188DFC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AADE0 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$make@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@@Z @ 0x180619008 (--$make@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@s.c)
 */

// Hidden C++ exception states: #wind=13
winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rsi
  GUID v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v4 = (RTL_SRWLOCK *)((char *)this + 24);
  winrt::immersive_shell_component::immersive_shell_component(
    (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 24),
    a2,
    a3);
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IWindowSnappingEvents,void>'};
  v4->Ptr = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 96) = 0;
  v6 = 0LL;
  v7 = 0LL;
  winrt::make<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::hstring>>(
    (_QWORD *)this + 49,
    (__int64 *)&v6);
  if ( *(_QWORD *)&v6.Data1 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(
      *(volatile signed __int32 ***)&v6.Data1,
      *(volatile signed __int32 ***)v6.Data4);
    std::_Deallocate<16>(
      *(void **)&v6.Data1,
      (struct std::nothrow_t *)((v7 - *(_QWORD *)&v6.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_BYTE *)this + 448) = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 57);
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  v6 = GUID_b2f053b6_daf6_403a_882b_e0fa5a93d3d6;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v4, (__int128 *)&v6);
  return this;
}
