/*
 * XREFs of _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806DD9F9
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 208) + 40LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 48));
}
