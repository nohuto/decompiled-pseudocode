/*
 * XREFs of _lambda_0c278ba272db598cb3813ab71714e0df_::__lambda_0c278ba272db598cb3813ab71714e0df_ @ 0x1802C6250
 * Callers:
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180217B84 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0c278ba272db598cb3813ab71714e0df____::_1_::dtor$0 @ 0x1806DB35B (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806DB35B.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall lambda_0c278ba272db598cb3813ab71714e0df_::__lambda_0c278ba272db598cb3813ab71714e0df_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
  return result;
}
