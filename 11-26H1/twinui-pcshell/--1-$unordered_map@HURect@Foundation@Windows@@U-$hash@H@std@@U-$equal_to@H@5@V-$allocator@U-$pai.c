/*
 * XREFs of ??1?$unordered_map@HURect@Foundation@Windows@@U?$hash@H@std@@U?$equal_to@H@5@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x1802C1948
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$2 @ 0x1806CD8C2 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1806CD8C2.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$1 @ 0x1806D7B77 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDataModel_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$16 @ 0x1806DD210 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$16.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$36 @ 0x1806F838E (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$36.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<int,Windows::Foundation::Rect>::~unordered_map<int,Windows::Foundation::Rect>(
        _QWORD *a1)
{
  return std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>(a1);
}
