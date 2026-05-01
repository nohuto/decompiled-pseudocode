/*
 * XREFs of ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049D460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1801B4734 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801B48F8 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EF938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801EFE24 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025386C (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x1802ADEF8 (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802AF7A0 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$TouchSwipeStarted@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@MultitaskingViewTelemetry@@SAXAEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@Z @ 0x180498E24 (--$TouchSwipeStarted@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@Multitasking.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049ADEC (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartTouchSwipe(
        MultitaskingViewGestureHandler *this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3)
{
  const char *v7; // r9
  int updated; // esi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  char v12; // r12
  char v13; // r13
  int v14; // esi
  __int64 v15; // r8
  bool v16; // al
  bool v17; // si
  __int64 v18; // r8
  float v19; // ecx
  bool v20; // zf
  float v21; // [rsp+20h] [rbp-10h] BYREF
  int v22; // [rsp+28h] [rbp-8h] BYREF
  int v23; // [rsp+2Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( !*((_BYTE *)this + 232) )
  {
    if ( *(_DWORD *)a3 != 1 && ((*(_DWORD *)a3 - 2) & 0xFFFFFFFD) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    *((_DWORD *)this + 48) = a2;
    if ( !(unsigned int)GetPointerType(a2, (char *)this + 216) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xBF,
               (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v7);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 1LL);
    *((_QWORD *)this + 20) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                               (MultitaskingViewGestureHandler *)((char *)this - 16),
                               a2);
    updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions(
                (MultitaskingViewGestureHandler *)((char *)this - 16),
                a2);
    if ( updated < 0 )
    {
      v9 = 195LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    v10 = (int)*((float *)a3 + 2);
    LOBYTE(v22) = 0;
    v23 = 0;
    LODWORD(v25) = v10;
    HIDWORD(v25) = (int)*((float *)a3 + 3);
    *((_QWORD *)this + 14) = v25;
    updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                (MultitaskingViewGestureHandler *)((char *)this - 16),
                (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v22);
    if ( updated < 0 )
    {
      v9 = 199LL;
      goto LABEL_9;
    }
    v11 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
            *((_DWORD *)this + 28),
            *((_DWORD *)this + 29));
    v12 = v22;
    v13 = v23;
    LODWORD(v25) = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v11, v22, v23);
    v14 = v25;
    MultitaskingViewTelemetry::TouchSwipeStarted<enum MultitaskingViewGestureHandlerHelpers::GestureAction &,unsigned int const &>(
      (int *)&v25,
      (int *)a3 + 1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v15);
    v16 = *((_BYTE *)a3 + 24) && v14 == 1 && *((_DWORD *)a3 + 1) == 3;
    *((_BYTE *)this + 208) = v16;
    *((_DWORD *)this + 53) = v16 ? v14 : 0;
    v17 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11) && !v12 && (v13 & 1) == 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v18);
    if ( v17 )
    {
      updated = MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows((CAppThumbnailWindow ***)this - 2);
      if ( updated < 0 )
      {
        v9 = 240LL;
        goto LABEL_9;
      }
    }
    v19 = *(float *)a3;
    if ( *(_DWORD *)a3 != 1 )
    {
      updated = MultitaskingViewGestureHandler::ProcessTouchGestureInput((__int64)this - 16, 1);
      if ( updated < 0 )
      {
        v9 = 245LL;
        goto LABEL_9;
      }
      v19 = *(float *)a3;
    }
    v20 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
    v21 = v19;
    LOBYTE(v25) = !v20;
    v22 = 1;
    MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(&v22, (int *)&v21, &v25);
  }
  return 0LL;
}
