/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$10 @ 0x1806E47FD
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 336) = *(_QWORD *)(a2 + 64) + 400LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 336));
}
