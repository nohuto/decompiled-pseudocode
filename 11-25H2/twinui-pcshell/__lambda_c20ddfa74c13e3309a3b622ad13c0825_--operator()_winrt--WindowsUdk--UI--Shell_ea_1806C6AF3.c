/*
 * XREFs of __lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs__::_1_::dtor$13 @ 0x1806C6AF3
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs__::_1_::dtor_13(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 224) + 144LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 144));
}
