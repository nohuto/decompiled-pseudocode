/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180221010
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::dtor$5 @ 0x1806FC8FA (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<std::wstring>::_Destroy(__int64 a1)
{
  return std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 16));
}
