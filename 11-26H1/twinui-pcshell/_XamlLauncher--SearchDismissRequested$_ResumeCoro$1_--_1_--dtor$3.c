/*
 * XREFs of _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806EE1D5
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall XamlLauncher::SearchDismissRequested__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 88LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 80));
}
