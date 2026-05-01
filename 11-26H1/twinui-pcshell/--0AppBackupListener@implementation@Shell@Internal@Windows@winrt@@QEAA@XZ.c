/*
 * XREFs of ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806120B4
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1802ABA00 (--0-$heap_implements@V-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x180216B0C (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?OpenForCurrentUser@PackageCatalog@ApplicationModel@Windows@winrt@@SA@XZ @ 0x1802B6DFC (-OpenForCurrentUser@PackageCatalog@ApplicationModel@Windows@winrt@@SA@XZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@1@AEBV?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@1@@Z @ 0x180611CC0 (--0-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_JV-$_U.c)
 *     ??0?$producers_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UAppBackupListener@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18061209C (--0-$producers_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@V-$tuple@UAp.c)
 */

// Hidden C++ exception states: #wind=20
winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 *v5; // rax
  GUID v7; // [rsp+20h] [rbp-28h] BYREF
  char *v8; // [rsp+58h] [rbp+10h] BYREF

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::AppBackupListener,std::tuple<winrt::Windows::Internal::Shell::AppBackupListener>>::producers_base<winrt::Windows::Internal::Shell::implementation::AppBackupListener,std::tuple<winrt::Windows::Internal::Shell::AppBackupListener>>();
  winrt::immersive_shell_component::immersive_shell_component(this, v2, v3);
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::Shell::implementation::AppBackupListener::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  v8 = (char *)this + 264;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x70uLL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 34) = v4;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 7LL;
  *((_QWORD *)this + 40) = 8LL;
  *((_DWORD *)this + 66) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 36,
    0x10uLL,
    *((_QWORD *)this + 34));
  std::_Mutex_base::_Mutex_base((winrt::Windows::Internal::Shell::implementation::AppBackupListener *)((char *)this + 328));
  *((_QWORD *)this + 51) = 0LL;
  LODWORD(v8) = 0;
  std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>(
    (__int64)this + 416,
    &v8);
  std::wstring::wstring((__int64)this + 480);
  std::wstring::wstring((__int64)this + 512);
  v5 = winrt::Windows::ApplicationModel::PackageCatalog::OpenForCurrentUser(&v8);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 12, v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  v7 = GUID_2eea1178_e9d9_45a1_8d5c_aff70a8187f8;
  winrt::immersive_shell_component::register_service_information<_GUID const>((RTL_SRWLOCK *)this, (__int128 *)&v7);
  return this;
}
