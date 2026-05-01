/*
 * XREFs of _lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_ @ 0x1802CED60
 * Callers:
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x18022EAD4 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9532b1fa26d741b99fb0a1f5016c730____::_1_::dtor$0 @ 0x1806B3755 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806B3755.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
  return result;
}
