/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$17 @ 0x1806C5DE2
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 240) + 48LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 88));
}
