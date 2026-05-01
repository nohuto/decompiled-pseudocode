/*
 * XREFs of ??1?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@QEAA@XZ @ 0x1801FBD8C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$8 @ 0x1806CDC49 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1806CDC49.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::dtor$5 @ 0x1807020BA (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_1807020BA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::optional<std::pair<winrt::hstring,winrt::hstring>>::~optional<std::pair<winrt::hstring,winrt::hstring>>()
{
  return std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>();
}
