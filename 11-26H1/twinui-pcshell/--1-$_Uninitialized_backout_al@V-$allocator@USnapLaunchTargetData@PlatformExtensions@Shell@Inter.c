/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1805B99E0
 * Callers:
 *     _std::_Uninitialized_copy_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_const___winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_const___std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____::_1_::dtor$0 @ 0x1806F9DB1 (_std--_Uninitialized_copy_winrt--Windows--Internal--Shell--PlatformExtensions--SnapLaunchTargetD.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>::~_Uninitialized_backout_al<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **a1)
{
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
    *a1,
    a1[1]);
}
