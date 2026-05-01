/*
 * XREFs of ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1806397F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x180638DAC (-CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@.c)
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180638ED0 (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::WinEventProc(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject,
        LONG idChild)
{
  __int64 *v6; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( event == 32769 && !idObject && !idChild )
  {
    v6 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::Current(v7);
    winrt::Windows::Internal::Shell::implementation::WindowsTracker::CheckAndRaiseEvent(
      (RTL_SRWLOCK *)((*v6 - 16) & -(__int64)(*v6 != 0)),
      hwnd);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  }
}
