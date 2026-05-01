/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180578354
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805782F4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellS.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@1@V21@@Z @ 0x180578C04 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@winrt@@USnapL.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x18057FE84 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapCo.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>(
        __int64 a1,
        volatile signed __int32 **a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2 + 2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
