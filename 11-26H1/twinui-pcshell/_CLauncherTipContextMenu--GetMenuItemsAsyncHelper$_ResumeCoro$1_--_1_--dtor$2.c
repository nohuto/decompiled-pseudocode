/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$2 @ 0x180700470
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 304) = *(_QWORD *)(a2 + 544) + 40LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 304));
}
