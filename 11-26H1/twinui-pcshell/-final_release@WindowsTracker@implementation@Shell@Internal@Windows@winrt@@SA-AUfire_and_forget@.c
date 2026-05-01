/*
 * XREFs of ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18028B754
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18028B6BC (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 *     ?Release@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAIXZ @ 0x18028B700 (-Release@-$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18065E910 (--1-$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@U.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18065F530 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(__int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  v2 = operator new(0x50uLL);
  v3 = *a1;
  *a1 = 0LL;
  v2[9] = v3;
  *v2 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1;
  *((_DWORD *)v2 + 2) = 65538;
  *((_BYTE *)v2 + 64) = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1(v2);
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(a1);
  return 0;
}
