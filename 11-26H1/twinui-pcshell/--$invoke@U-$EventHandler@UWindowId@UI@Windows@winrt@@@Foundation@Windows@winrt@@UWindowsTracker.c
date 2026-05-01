/*
 * XREFs of ??$invoke@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@impl@winrt@@YA_NAEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBUWindowsTracker@implementation@Shell@Internal@41@AEBUWindowId@UI@41@@Z @ 0x18065E3A0
 * Callers:
 *     ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x18065E024 (--$-RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@-$event@U-$Ev.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18002A230 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x1802345AC (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
        __int64 **a1,
        __int64 a2,
        __int64 *a3)
{
  struct IUnknown *v5; // rax
  void *v6; // r8
  winrt::impl *v7; // rcx
  bool result; // al
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  winrt::copy_from_abi((winrt *)&v9, v5, v6);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
      a1,
      &v9,
      a3);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    result = 1;
  }
  catch ( ... )
  {
    return winrt::impl::report_failed_invoke(v7);
  }
  return result;
}
