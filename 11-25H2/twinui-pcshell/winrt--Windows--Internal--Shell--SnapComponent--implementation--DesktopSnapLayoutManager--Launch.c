/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x180596384
 * Callers:
 *     ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x180596A40 (-LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x180596440 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_180596440.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        char *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        int *a7)
{
  int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v9 = *a7;
  v10 = a4[2];
  a4[2] = 0LL;
  v11 = a4[1];
  a4[1] = 0LL;
  v12 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 193) = v12;
  *(_QWORD *)(a3 + 201) = v11;
  *(_QWORD *)(a3 + 209) = v10;
  v13 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a3 + 217) = v13;
  *(_QWORD *)(a3 + 225) = a6;
  *(_DWORD *)(a3 + 233) = v9;
  *(_QWORD *)a3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1;
  *((_DWORD *)a3 + 2) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  a3[192] = 0;
  return winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(a3);
}
