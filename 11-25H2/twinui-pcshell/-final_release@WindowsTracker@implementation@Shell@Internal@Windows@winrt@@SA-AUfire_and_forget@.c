/*
 * XREFs of ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x180294490
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802943FC (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 *     ?Release@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAIXZ @ 0x180294440 (-Release@-$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180638C0C (--1-$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@U.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_InitCoro$2 @ 0x180639A7C (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_InitCoro$2.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release(__int64 a1)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+88h] [rbp+10h] BYREF
  int v6; // [rsp+90h] [rbp+18h] BYREF

  v2 = operator new(0x50uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__InitCoro_2(&v5, &v6, v2, a1);
  v3 = v5;
  std::unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(a1);
  return v3;
}
