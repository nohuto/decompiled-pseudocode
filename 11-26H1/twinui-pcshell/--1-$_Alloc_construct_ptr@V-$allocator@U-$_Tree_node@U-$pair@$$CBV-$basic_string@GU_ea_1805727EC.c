/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805727EC
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180572840 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_180572840.c)
 *     ??1?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805728A0 (--1-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@G_ea_1805728A0.c)
 *     ??$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAAPEAU?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@1@QEAU21@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x18067B624 (--$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@-$list@UGMRelatedProcess@KnownGameList@@V-$allo.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_Win32AppInfo____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&_std::shared_ptr_Win32AppInfo____::_1_::dtor$1 @ 0x1806F4EDF (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_std--basic_string_un_ea_1806F4EDF.c)
 *     _std::list_KnownGameList::GMRelatedProcess_std::allocator_KnownGameList::GMRelatedProcess___::_Emplace_KnownGameList::GMRelatedProcess_const_&__::_1_::dtor$1 @ 0x180705B68 (_std--list_KnownGameList--GMRelatedProcess_std--allocator_KnownGameList--GMRelatedProcess___--_E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x50);
}
