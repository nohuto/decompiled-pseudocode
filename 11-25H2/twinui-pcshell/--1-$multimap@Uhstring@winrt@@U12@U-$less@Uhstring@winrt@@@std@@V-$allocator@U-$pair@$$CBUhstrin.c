/*
 * XREFs of ??1?$multimap@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x180338698
 * Callers:
 *     _winrt::single_threaded_map_winrt::hstring_winrt::hstring_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__winrt::hstring______::_1_::dtor$0 @ 0x1806BBF7D (_winrt--single_threaded_map_winrt--hstring_winrt--hstring_std--less_winrt--hstring__std--allocat.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::dtor$13 @ 0x1806DC04A (_winrt--Windows--Internal--Shell--implementation--LaunchUriData--GetForLaunchUri_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::to_multimap_::_1_::dtor$0 @ 0x1806DC160 (_winrt--Windows--Internal--Shell--implementation--to_multimap_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::multimap<winrt::hstring,winrt::hstring>::~multimap<winrt::hstring,winrt::hstring>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    a1,
    (__int64)a1);
}
