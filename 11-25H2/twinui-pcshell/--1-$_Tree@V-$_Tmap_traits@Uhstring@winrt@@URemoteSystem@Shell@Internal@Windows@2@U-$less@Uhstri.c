/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x180623C64
 * Callers:
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802CB2DC (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@QEAA@XZ @ 0x180623FF8 (--1-$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U-$less@Uhstring@winrt@@@std@@V-.c)
 *     ??1?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@UEAA@XZ @ 0x18062402C (--1-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhstring@winrt@@URem.c)
 *     ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180624DC0 (-Clear@-$produce@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhstr.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@@Z @ 0x18022DC40 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Intern.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>::~_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
