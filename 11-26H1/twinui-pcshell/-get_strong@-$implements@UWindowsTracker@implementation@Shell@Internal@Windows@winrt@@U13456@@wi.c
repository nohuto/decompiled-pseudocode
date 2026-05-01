/*
 * XREFs of ?get_strong@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801DCCF4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18065EB90 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18065EF30 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::get_strong(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // r9

  *a2 = 0LL;
  v2 = a2;
  if ( a1 )
  {
    *a2 = a1;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
  }
  return v2;
}
