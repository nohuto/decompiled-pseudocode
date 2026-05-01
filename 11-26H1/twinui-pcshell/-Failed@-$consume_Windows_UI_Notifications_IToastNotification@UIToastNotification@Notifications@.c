/*
 * XREFs of ?Failed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastFailedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805EF728
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$?0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x1801CFEAC (--$-0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@-$weak_ref@UIToastNotification@Not.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Failed(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h]

  v12 = a2;
  v5 = *a1;
  v7 = *a4;
  v12 = 0LL;
  v14 = 0;
  v8 = *v5;
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v8 + 104))(v5, v7, &v12);
  winrt::check_hresult(&v13, v9, (__int64)&v14);
  v10 = v12;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    a2,
    (__int64)a1);
  result = a2;
  a2[1] = v10;
  return result;
}
