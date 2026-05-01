/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806D9789
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 160) + 80LL;
  *(_QWORD *)(a2 + 88) = **(_QWORD **)(a2 + 80);
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 88));
}
