/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$17 @ 0x1806BD458
 * Callers:
 *     <none>
 * Callees:
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_17(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 392) = *(_QWORD *)(a2 + 56) + 552LL;
  winrt::impl::signal_awaiter::~signal_awaiter(*(winrt::cancellable_promise ***)(a2 + 392));
}
