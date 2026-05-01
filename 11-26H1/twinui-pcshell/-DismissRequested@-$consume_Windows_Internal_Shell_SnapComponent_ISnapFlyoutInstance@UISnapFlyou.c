/*
 * XREFs of ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3B08
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$?0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x1801CFEAC (--$-0AEBUIToastNotification@Notifications@UI@Windows@winrt@@X@-$weak_ref@UIToastNotification@Not.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        __int64 *a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  int v11; // [rsp+28h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  LOBYTE(v14) = a3;
  v13 = 0LL;
  v5 = *a1;
  v7 = *a4;
  v11 = 0;
  v12 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 208LL))(v5, v7, &v13);
  winrt::check_hresult(&v14, v8, (__int64)&v11);
  v9 = v13;
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    a2,
    (__int64)a1);
  a2[1] = v9;
  return a2;
}
