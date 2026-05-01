/*
 * XREFs of ??R_lambda_46040f8e0bae6346adc61d6c0793c606_@@QEBA@AEBUIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x1804A2DFC
 * Callers:
 *     ??$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@?$factory_cache_entry@UInputAnimationTarget@Input@Internal@UI@Windows@winrt@@UIInputAnimationTargetStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@Z @ 0x1804A2948 (--$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@-$factory_cache_entry@UInputAnimationTar.c)
 *     ?GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor@Composition@456@AEBUGestureAnimationData@23456@@Z @ 0x1804A6010 (-GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor.c)
 * Callees:
 *     ?GetInputAnimationObject@?$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@AEBUGestureAnimationData@Input@Internal@673@@Z @ 0x1804A5F98 (-GetInputAnimationObject@-$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInpu.c)
 */

__int64 __fastcall _lambda_46040f8e0bae6346adc61d6c0793c606_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics<winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::GetInputAnimationObject(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
