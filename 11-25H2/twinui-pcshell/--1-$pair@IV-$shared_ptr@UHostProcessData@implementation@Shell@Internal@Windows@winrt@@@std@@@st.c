/*
 * XREFs of ??1?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802CED00
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$2 @ 0x1806A92B6 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2_::_1_::dtor$1 @ 0x1806D6601 (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCo_ea_1806D6601.c)
 *     __lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____________::_1_::dtor$9 @ 0x1806DBDD1 (__lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hs_ea_1806DBDD1.c)
 *     __lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____________::_1_::dtor$9 @ 0x1806DBDF5 (__lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hs_ea_1806DBDF5.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveProcessData_::_1_::dtor$5 @ 0x1806DC010 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--S_ea_1806DC010.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>::~pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>(
        _QWORD *a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)a1[2];
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
