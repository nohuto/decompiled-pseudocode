/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180357A40
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIAudioSessionManager2@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180357AC8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180473DA4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@s.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180550488 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_180550488.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180550518 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@G_ea_180550518.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::pair_unsigned_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::pair_unsigned_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType____void________unsigned_short_const___&_std::pair_int_enum_Windows::Internal::FamilySafety::AppLimits::TerminationType____::_1_::dtor$1 @ 0x1806B7882 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_unsigned_short_.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__Microsoft::WRL::ComPtr_IAudioSessionManager2____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__Microsoft::WRL::ComPtr_IAudioSessionManager2____void________std::piecewise_construct_t_const_&_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&&__std::tuple_____::_1_::dtor$1 @ 0x1806BDE5C (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_1806BDE5C.c)
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption____0___::_Emplace_hint_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption__const_&__::_1_::dtor$2 @ 0x1806CCDDD (_std--_Tree_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1806CCDDD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x48);
}
