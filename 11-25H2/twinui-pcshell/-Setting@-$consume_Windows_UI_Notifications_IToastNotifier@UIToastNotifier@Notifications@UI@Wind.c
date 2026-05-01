/*
 * XREFs of ?Setting@?$consume_Windows_UI_Notifications_IToastNotifier@UIToastNotifier@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802AF174
 * Callers:
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1802AF0B8 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotifier<winrt::Windows::UI::Notifications::IToastNotifier>::Setting(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  unsigned int v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = *a1;
  v7 = 0;
  v5 = 0;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 64LL))(v1, &v7);
  winrt::check_hresult(v4, v2, &v5);
  return v7;
}
