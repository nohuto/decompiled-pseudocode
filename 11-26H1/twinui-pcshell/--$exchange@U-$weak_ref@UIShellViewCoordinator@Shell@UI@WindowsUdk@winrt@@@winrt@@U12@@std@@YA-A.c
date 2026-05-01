/*
 * XREFs of ??$exchange@U?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@U12@@std@@YA?AU?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800268E8
 * Callers:
 *     ?unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18063B290 (-unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 *__fastcall std::exchange<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  if ( a2 != a3 )
  {
    if ( *a2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
    v7 = *a3;
    *a3 = 0LL;
    *a2 = v7;
  }
  return a1;
}
