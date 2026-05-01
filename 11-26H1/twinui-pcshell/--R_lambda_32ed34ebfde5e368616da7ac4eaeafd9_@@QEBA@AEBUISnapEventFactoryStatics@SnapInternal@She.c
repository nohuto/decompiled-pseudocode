/*
 * XREFs of ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021E5A8
 * Callers:
 *     ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x18029BC18 (--$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@-$factory_cache_entry@USnapEventFactory@.c)
 *     ?CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@@Z @ 0x1802ABAE4 (-CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUP.c)
 * Callees:
 *     ?GetStartWindowInfo@?$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3@UIStartControllerExtensionStatics3@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x18021E5D0 (-GetStartWindowInfo@-$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtension.c)
 */

__int64 __fastcall _lambda_32ed34ebfde5e368616da7ac4eaeafd9_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>::GetStartWindowInfo(
    a3,
    a2,
    *a1);
  return a2;
}
