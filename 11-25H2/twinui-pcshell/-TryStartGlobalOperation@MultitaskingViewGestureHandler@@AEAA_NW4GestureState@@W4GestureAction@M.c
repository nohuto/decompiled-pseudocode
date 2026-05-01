/*
 * XREFs of ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1802AC490
 * Callers:
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18048BF30 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A72E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$TryStartGlobalOperation@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4GestureState@@@MultitaskingViewTelemetry@@SAXAEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4GestureState@@@Z @ 0x1802AC57C (--$TryStartGlobalOperation@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEAW4Gestur.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x1804894BC (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?TryStartGlobalOperationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I_K@Z @ 0x18048CDA4 (-TryStartGlobalOperationAsync@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MultitaskingViewGestureHandler::TryStartGlobalOperation(__int64 a1, int a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r9
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
    v8 = a3 - 3;
    if ( v8 )
    {
      if ( v8 == 5 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v6,
          v7);
        v9 = 6LL;
LABEL_11:
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::TryStartGlobalOperationAsync(
          a1 + 240,
          &v12,
          *(unsigned int *)(a1 + 208),
          v9);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
        return 1;
      }
    }
    else
    {
      v11[0] = a1;
      v15 = 0;
      v12 = 0;
      v11[1] = &v12;
      if ( (int)lambda_437fa58503517304dd979000588ba553_::operator()(v11) >= 0
        && !v12
        && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v15) >= 0
        && v15 == 1 )
      {
        v9 = 4LL;
        goto LABEL_11;
      }
    }
  }
  return 0;
}
