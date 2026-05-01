/*
 * XREFs of ??R_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@QEBA@AEBUIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@Z @ 0x1805620B4
 * Callers:
 *     ??$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@Z @ 0x180561888 (--$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180562920 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 * Callees:
 *     ?GetTemplateContent@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ToastTemplateType@Notifications@UI@Windows@3@@Z @ 0x18056251C (-GetTemplateContent@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastN.c)
 */

__int64 __fastcall _lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::GetTemplateContent(
    a3,
    a2,
    *a1);
  return a2;
}
