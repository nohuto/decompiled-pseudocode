/*
 * XREFs of ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180595270
 * Callers:
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x180596204 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     ?Run@?$produce@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@UEAAHXZ @ 0x180597000 (-Run@-$produce@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unforced@std@@P6A-AUfire_a.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18059452C (--$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 *     ??1?$_Tidy_guard@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1805957CC (--1-$_Tidy_guard@V-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt.c)
 *     ?_Buy_nonzero@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180597644 (-_Buy_nonzero@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>(
        __int64 a1,
        struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 3) )
  {
    std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Buy_nonzero();
    v5 = a1;
    *(_QWORD *)(a1 + 8) = std::_Uninitialized_copy<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData const *,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData const *,std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
                            *a2,
                            a2[1],
                            *(winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData **)a1);
    v5 = 0LL;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(&v5);
  }
  return a1;
}
