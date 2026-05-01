/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x1806D4449
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 536) = *(_QWORD *)(a2 + 136) + 160LL;
  std::wstring::_Tidy_deallocate(*(void ***)(a2 + 536));
}
