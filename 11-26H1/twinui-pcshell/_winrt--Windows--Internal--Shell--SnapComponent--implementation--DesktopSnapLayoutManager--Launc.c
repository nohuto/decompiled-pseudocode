/*
 * XREFs of _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_ @ 0x1805B990C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_1_::dtor$3 @ 0x1806FA132 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806FA132.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 24);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  return std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(a1);
}
