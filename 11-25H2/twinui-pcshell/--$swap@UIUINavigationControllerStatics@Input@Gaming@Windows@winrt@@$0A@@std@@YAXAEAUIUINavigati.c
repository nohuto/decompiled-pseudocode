/*
 * XREFs of ??$swap@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$0A@@std@@YAXAEAUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@0@Z @ 0x18023086C
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 */

__int64 *__fastcall std::swap<winrt::Windows::Gaming::Input::IUINavigationControllerStatics,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  v5[0] = v2;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, a2);
  result = v5;
  if ( a2 == v5 )
  {
    if ( v2 )
      return (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v5);
  }
  else
  {
    if ( *a2 )
      result = (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
    *a2 = v2;
  }
  return result;
}
