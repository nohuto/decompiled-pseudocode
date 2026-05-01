/*
 * XREFs of __lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator()_::_1_::dtor$1 @ 0x1806F0261
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 128) + 56LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 80));
}
