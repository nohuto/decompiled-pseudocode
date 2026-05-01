/*
 * XREFs of ??_G?$heap_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180638D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180638C60 (--1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowsTracker *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowsTracker *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::~WindowsTracker(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
