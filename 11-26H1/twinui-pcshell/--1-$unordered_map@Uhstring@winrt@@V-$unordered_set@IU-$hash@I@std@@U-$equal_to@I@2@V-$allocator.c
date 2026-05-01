/*
 * XREFs of ??1?$unordered_map@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@@std@@QEAA@XZ @ 0x18064A184
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RecoverRemoteSessionsData_::_1_::dtor$4 @ 0x180703DBB (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180703DBB.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper_::_1_::dtor$0 @ 0x180704B9A (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--R_ea_180704B9A.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper_::_1_::dtor$1 @ 0x180704BB0 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--R_ea_180704BB0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<winrt::hstring,std::unordered_set<unsigned int>>::~unordered_map<winrt::hstring,std::unordered_set<unsigned int>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>(a1);
}
