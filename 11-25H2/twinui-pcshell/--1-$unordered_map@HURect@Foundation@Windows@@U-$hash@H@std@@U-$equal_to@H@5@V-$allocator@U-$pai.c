/*
 * XREFs of ??1?$unordered_map@HURect@Foundation@Windows@@U?$hash@H@std@@U?$equal_to@H@5@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x1802CA1F8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$2 @ 0x1806A729A (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1806A729A.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$1 @ 0x1806AE107 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDat_ea_1806AE107.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$16 @ 0x1806B395C (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$16.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$36 @ 0x1806CFB0C (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$36.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<int,Windows::Foundation::Rect>::~unordered_map<int,Windows::Foundation::Rect>(
        __int64 a1)
{
  std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>(a1);
}
