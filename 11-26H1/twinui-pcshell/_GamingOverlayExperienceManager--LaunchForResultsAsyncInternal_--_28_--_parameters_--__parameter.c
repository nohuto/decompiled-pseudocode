/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_28_::_parameters_::__parameters_ @ 0x180341B70
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_1_::dtor$3 @ 0x1806E4BEF (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal_--_1_--dtor$3.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_28_::_parameters_::__parameters_(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 8));
}
