/*
 * XREFs of ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049AC40 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049B44C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049D460 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x180090BEC (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ??$InProcessInput@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z @ 0x180192290 (--$InProcessInput@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EF938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801EFE24 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025386C (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1802A4670 (-TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@M.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049A930 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchGestureInput(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // r10
  int v6; // edi
  __int64 v7; // rdx
  int v9; // edx
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*(_DWORD *)(a1 + 128), *(_DWORD *)(a1 + 132));
  if ( a2 == 3 )
    v6 = *(_DWORD *)(a1 + 228);
  else
    v6 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v4, *(_BYTE *)v5, *(_DWORD *)(v5 + 4));
  v11 = a2;
  v10 = v6;
  MultitaskingViewTelemetry::InProcessInput<unsigned int,unsigned int>(&v10, &v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( MultitaskingViewGestureHandler::TryStartGlobalOperation(a1, a2, v6) )
    return 0LL;
  switch ( v6 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      v9 = 2;
      goto LABEL_20;
    case 2:
      goto LABEL_21;
    case 3:
      v9 = 3;
      goto LABEL_20;
    case 4:
LABEL_19:
      v9 = 0;
      goto LABEL_20;
    case 5:
LABEL_16:
      v9 = 1;
LABEL_20:
      MultitaskingViewGestureHandler::AnimationComplete(a1, v9);
      goto LABEL_21;
  }
  if ( v6 != 6 && v6 != 7 )
  {
    if ( v6 != 8 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs((unsigned int)(v6 - 7), v7);
      goto LABEL_21;
    }
    goto LABEL_16;
  }
LABEL_21:
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( *(_QWORD *)(a1 + 96) == *(_QWORD *)(a1 + 104) || v6 != 3 )
      return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v6, 0LL);
    *(_DWORD *)(a1 + 160) = 3;
  }
  v6 = 0;
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v6, 0LL);
}
