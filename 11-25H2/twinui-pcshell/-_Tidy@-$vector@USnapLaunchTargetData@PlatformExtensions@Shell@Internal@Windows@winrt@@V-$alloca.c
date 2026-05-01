/*
 * XREFs of ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x180597728
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_ @ 0x180595718 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launc.c)
 *     ??1?$_Tidy_guard@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1805957CC (--1-$_Tidy_guard@V-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt.c)
 *     ??1?$tuple@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@winrt@@UCRect@Geometry@@I@std@@QEAA@XZ @ 0x18059590C (--1-$tuple@V-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$a.c)
 *     ??1?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18059593C (--1-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x180596204 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x180596A40 (-LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180593A4C (--$_Destroy_range@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@w.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
      v2,
      *(winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
