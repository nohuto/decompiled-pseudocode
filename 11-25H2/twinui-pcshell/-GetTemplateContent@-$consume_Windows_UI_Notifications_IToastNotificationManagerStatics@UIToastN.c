/*
 * XREFs of ?GetTemplateContent@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ToastTemplateType@Notifications@UI@Windows@3@@Z @ 0x18056251C
 * Callers:
 *     ??R_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@QEBA@AEBUIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@Z @ 0x1805620B4 (--R_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@QEBA@AEBUIToastNotificationManagerStatics@Notifica.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::GetTemplateContent(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v5 = *v3;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 64))(v3, v6, &v11);
  winrt::check_hresult((int *)&v12, v7, (__int64)&v9);
  *a2 = v11;
  return a2;
}
