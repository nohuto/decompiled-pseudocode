/*
 * XREFs of ?GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor@Composition@456@AEBUGestureAnimationData@23456@@Z @ 0x1804A6010
 * Callers:
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804A8234 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804A8F80 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D704 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     ??$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@?$factory_cache_entry@UInputAnimationTarget@Input@Internal@UI@Windows@winrt@@UIInputAnimationTargetStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@Z @ 0x1804A2948 (--$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@-$factory_cache_entry@UInputAnimationTar.c)
 *     ??R_lambda_46040f8e0bae6346adc61d6c0793c606_@@QEBA@AEBUIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x1804A2DFC (--R_lambda_46040f8e0bae6346adc61d6c0793c606_@@QEBA@AEBUIInputAnimationTargetStatics@Input@Intern.c)
 */

const struct winrt::Windows::UI::Composition::Compositor *__fastcall winrt::Windows::UI::Internal::Input::InputAnimationTarget::GetInputAnimationObject(
        const struct winrt::Windows::UI::Composition::Compositor *a1,
        const struct winrt::Windows::UI::Internal::Input::GestureAnimationData *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DBAD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics> )
  {
    _lambda_46040f8e0bae6346adc61d6c0793c606_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>);
    _InterlockedDecrement64(&qword_1808DBAD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBAD8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::call<_lambda_46040f8e0bae6346adc61d6c0793c606_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (__int64)v5);
  }
  return a1;
}
