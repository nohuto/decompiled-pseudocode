/*
 * XREFs of ?destroy@?$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180025190
 * Callers:
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801DD910 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180204ED0 (-RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9ee4d933fe310b4143213a3fe399024____::_1_::dtor$0 @ 0x1806E3683 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806E3683.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_945e3f99e324f0975fc3b8cf1a6859ea____::_1_::dtor$0 @ 0x1806E5E72 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806E5E72.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_1e29e45a324d9aede31372fdd231015a_,long (unsigned long)>::destroy(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
