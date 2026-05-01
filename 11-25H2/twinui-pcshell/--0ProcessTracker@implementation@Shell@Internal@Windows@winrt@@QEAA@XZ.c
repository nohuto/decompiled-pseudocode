/*
 * XREFs of ??0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063A75C
 * Callers:
 *     ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063A6C4 (--0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@2@@Z @ 0x1802915B8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802915B8.c)
 *     ??0?$producers_base@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UProcessTracker@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18063A6AC (--0-$producers_base@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@V-$tuple@UProce.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::ProcessTracker *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessTracker(
        winrt::Windows::Internal::Shell::implementation::ProcessTracker *this)
{
  _QWORD *v2; // rax

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ProcessTracker,std::tuple<winrt::Windows::Internal::Shell::ProcessTracker>>::producers_base<winrt::Windows::Internal::Shell::implementation::ProcessTracker,std::tuple<winrt::Windows::Internal::Shell::ProcessTracker>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::ProcessTracker::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_QWORD *)this + 11) = 8LL;
  *((_DWORD *)this + 8) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>>>>>::_Assign_grow(
    (__int64)this + 56,
    0x10uLL,
    *((_QWORD *)this + 5));
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
