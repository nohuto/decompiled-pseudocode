/*
 * XREFs of ??$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUINetworkConnectionUtils@Shell@Internal@Windows@1@@Z @ 0x18033FA80
 * Callers:
 *     ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x18033A994 (--$-0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@-$weak_ref@UI.c)
 *     ?StateChanged@?$consume_Windows_Internal_GamingOverlay_IGameBarWindowControl@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@3@@Z @ 0x1803549EC (-StateChanged@-$consume_Windows_Internal_GamingOverlay_IGameBarWindowControl@UIGameBarWindowCont.c)
 *     ?ProcessDestroyed@?$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$EventHandler@I@Foundation@Windows@3@@Z @ 0x18065BE20 (-ProcessDestroyed@-$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Intern.c)
 *     ?NetworkStateChanged@?$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1806692D4 (-NetworkStateChanged@-$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectio.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::from_com_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils const &>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, const char *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, const char *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    (**v3)(v3, "8", &v10);
    v4 = v10;
    v7 = v10;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    winrt::check_hresult((int *)&v10, v6, (__int64)&v8);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  }
}
