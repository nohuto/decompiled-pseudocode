/*
 * XREFs of ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1802A4670
 * Callers:
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$TryStartGlobalOperation@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4GestureState@@@MultitaskingViewTelemetry@@SAXAEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4GestureState@@@Z @ 0x1802A475C (--$TryStartGlobalOperation@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4Gestur.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x18049A120 (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?TryStartGlobalOperationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I_K@Z @ 0x18049D960 (-TryStartGlobalOperationAsync@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MultitaskingViewGestureHandler::TryStartGlobalOperation(__int64 a1, int a2, int a3)
{
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp+28h] BYREF
  int v13; // [rsp+68h] [rbp+30h] BYREF
  int v14; // [rsp+70h] [rbp+38h] BYREF
  int v15; // [rsp+78h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  MultitaskingViewTelemetry::TryStartGlobalOperation<enum MultitaskingViewGestureHandlerHelpers::GestureAction &,enum GestureState &>(
    &v14,
    &v13);
  if ( *(_QWORD *)(a1 + 96) != *(_QWORD *)(a1 + 104) && a2 == 1 )
  {
    v7 = a3 - 3;
    if ( v7 )
    {
      if ( v7 == 5 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v6);
        v8 = 6LL;
LABEL_11:
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::TryStartGlobalOperationAsync(
          a1 + 240,
          &v12,
          *(unsigned int *)(a1 + 208),
          v8);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
        return 1;
      }
    }
    else
    {
      v15 = 0;
      v12 = 0;
      v9 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v11, a1, (__int64)&v12);
      if ( (int)lambda_437fa58503517304dd979000588ba553_::operator()(v9) >= 0
        && !v12
        && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v15) >= 0
        && v15 == 1 )
      {
        v8 = 4LL;
        goto LABEL_11;
      }
    }
  }
  return 0;
}
