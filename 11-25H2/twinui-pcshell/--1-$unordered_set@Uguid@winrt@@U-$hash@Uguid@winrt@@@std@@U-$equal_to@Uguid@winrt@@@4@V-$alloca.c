/*
 * XREFs of ??1?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x1802BEF7C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges_::_1_::dtor$1 @ 0x1806A7264 (_winrt--Windows--Internal--Shell--implementation--WindowData--GetPendingTabChanges_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$1 @ 0x1806A7288 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_--_1_--dtor$.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$1 @ 0x1806A732A (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1806A732A.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_set<winrt::guid>::~unordered_set<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>,std::allocator<winrt::guid>>(
        __int64 a1)
{
  std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::~_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(a1);
}
