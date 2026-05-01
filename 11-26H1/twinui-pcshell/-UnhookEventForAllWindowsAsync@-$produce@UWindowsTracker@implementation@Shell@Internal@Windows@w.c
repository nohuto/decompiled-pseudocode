/*
 * XREFs of ?UnhookEventForAllWindowsAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18065F110
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18065F164 (-UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker>::UnhookEventForAllWindowsAsync(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 *)winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync(
                    (a1 - 16) & -(__int64)(a1 != 0),
                    &v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return 0LL;
}
