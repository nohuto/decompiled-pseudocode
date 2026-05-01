/*
 * XREFs of ?OnUINavigationControllerRemoved@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034B840
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GamingOverlayExperienceManager::OnUINavigationControllerRemoved(
        GamingOverlayExperienceManager *this,
        struct IInspectable a2,
        const struct winrt::Windows::Gaming::Input::UINavigationController *a3)
{
  __time64_t Time; // [rsp+20h] [rbp-18h] BYREF

  Time = 0LL;
  _time64(&Time);
  *((_QWORD *)this + 199) = Time;
  if ( a2.lpVtbl->QueryInterface )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2.lpVtbl);
}
