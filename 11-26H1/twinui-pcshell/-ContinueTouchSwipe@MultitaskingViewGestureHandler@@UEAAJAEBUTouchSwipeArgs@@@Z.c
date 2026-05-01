/*
 * XREFs of ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049AC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801B48F8 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EF938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801EFE24 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025386C (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x1802ADEF8 (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ContinueTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  int v5; // eax
  int MultitaskingViewState; // esi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // esi
  __int64 v10; // r8
  bool v11; // cl
  float v12; // edx
  bool v13; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  char v15; // [rsp+58h] [rbp+38h] BYREF
  int v16; // [rsp+5Ch] [rbp+3Ch]
  float v17; // [rsp+60h] [rbp+40h] BYREF
  int v18; // [rsp+68h] [rbp+48h] BYREF

  if ( *(_DWORD *)a2 != 1 && ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 2LL);
  v5 = (int)*((float *)a2 + 2);
  v15 = 0;
  v16 = 0;
  *((_DWORD *)this + 28) += v5;
  *((_DWORD *)this + 29) += (int)*((float *)a2 + 3);
  MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                            (MultitaskingViewGestureHandler *)((char *)this - 16),
                            (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v15);
  if ( MultitaskingViewState < 0 )
  {
    v7 = 322LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)MultitaskingViewState);
    return (unsigned int)MultitaskingViewState;
  }
  v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*((_DWORD *)this + 28), *((_DWORD *)this + 29));
  v9 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v8, v15, v16);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( v9 != 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v10);
    if ( v9 != 8 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
        1u,
        3u);
      if ( !*((_BYTE *)this + 232) )
      {
        v11 = *((_BYTE *)a2 + 24) && v9 == 1 && *((_DWORD *)a2 + 1) == 3;
        *((_BYTE *)this + 208) = v11;
        *((_DWORD *)this + 53) = v11 ? v9 : 0;
        v12 = *(float *)a2;
        if ( *(_DWORD *)a2 != 1 && !v11 )
        {
          MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput((char *)this - 16, 2LL, &v15);
          if ( MultitaskingViewState < 0 )
          {
            v7 = 348LL;
            goto LABEL_6;
          }
          v12 = *(float *)a2;
        }
        v13 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
        v17 = v12;
        v15 = !v13;
        v18 = 2;
        MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(&v18, (int *)&v17, &v15);
      }
    }
  }
  return 0LL;
}
