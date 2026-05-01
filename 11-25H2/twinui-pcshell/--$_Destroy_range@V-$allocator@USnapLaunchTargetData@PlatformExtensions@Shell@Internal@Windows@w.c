/*
 * XREFs of ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180593A4C
 * Callers:
 *     ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18059452C (--$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1805957EC (--1-$_Uninitialized_backout_al@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Inter.c)
 *     ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x180597728 (-_Tidy@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloca.c)
 * Callees:
 *     ??1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180595948 (--1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *this,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::~SnapLaunchTargetData(v3);
      v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
