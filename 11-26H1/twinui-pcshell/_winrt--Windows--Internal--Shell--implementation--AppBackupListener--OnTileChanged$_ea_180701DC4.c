/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1_::_1_::dtor$5 @ 0x180701DC4
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 160) + 72LL;
  *(_QWORD *)(a2 + 88) = **(_QWORD **)(a2 + 80);
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 88));
}
