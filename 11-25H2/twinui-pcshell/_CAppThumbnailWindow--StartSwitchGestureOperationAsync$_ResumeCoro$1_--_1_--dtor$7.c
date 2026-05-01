/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$7 @ 0x1806C8F90
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 336) + 160LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 176));
}
