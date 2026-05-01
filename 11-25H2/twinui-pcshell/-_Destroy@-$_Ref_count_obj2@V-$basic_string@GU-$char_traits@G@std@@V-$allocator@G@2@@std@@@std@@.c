/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180230090
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::dtor$5 @ 0x1806D479C (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<std::wstring>::_Destroy(__int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 16));
}
