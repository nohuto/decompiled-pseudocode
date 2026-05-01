/*
 * XREFs of ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18048C860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180132E6C (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x18013301C (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9F68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801FA274 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025A698 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A72E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x1802B7250 (--$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802B8D24 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ??$TouchSwipeStarted@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@MultitaskingViewTelemetry@@SAXAEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@Z @ 0x1804880FC (--$TouchSwipeStarted@AEAW4GestureAction@MultitaskingViewGestureHandlerHelpers@@AEBI@Multitasking.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A170 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18048BF30 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartTouchSwipe(
        MultitaskingViewGestureHandler *this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3,
        __int64 a4)
{
  const char *v8; // r9
  int updated; // esi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  char v13; // r12
  char v14; // r13
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  bool v19; // al
  bool v20; // si
  __int64 v21; // r8
  __int64 v22; // r9
  float v23; // edx
  bool v24; // zf
  float v25; // [rsp+20h] [rbp-10h] BYREF
  int v26; // [rsp+28h] [rbp-8h] BYREF
  int v27; // [rsp+2Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v29; // [rsp+78h] [rbp+48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( *((_BYTE *)this + 232) )
    return 0LL;
  if ( ((*(_DWORD *)a3 - 1) & 0xFFFFFFFC) == 0 && *(_DWORD *)a3 != 3 )
  {
    *((_DWORD *)this + 48) = a2;
    if ( !(unsigned int)GetPointerType(a2, (char *)this + 216) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xBF,
               (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v8);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 1LL);
    *((_QWORD *)this + 20) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                               (MultitaskingViewGestureHandler *)((char *)this - 16),
                               a2);
    updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions(
                (MultitaskingViewGestureHandler *)((char *)this - 16),
                a2);
    if ( updated >= 0 )
    {
      v11 = (int)*((float *)a3 + 2);
      LOBYTE(v26) = 0;
      v27 = 0;
      LODWORD(v29) = v11;
      HIDWORD(v29) = (int)*((float *)a3 + 3);
      *((_QWORD *)this + 14) = v29;
      updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                  (MultitaskingViewGestureHandler *)((char *)this - 16),
                  (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v26);
      if ( updated >= 0 )
      {
        v12 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
                *((_DWORD *)this + 28),
                *((_DWORD *)this + 29));
        v13 = v26;
        v14 = v27;
        LODWORD(v29) = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v12, v26, v27);
        v15 = v29;
        MultitaskingViewTelemetry::TouchSwipeStarted<enum MultitaskingViewGestureHandlerHelpers::GestureAction &,unsigned int const &>(
          (int *)&v29,
          (int *)a3 + 1);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v16,
          v17);
        v19 = *((_BYTE *)a3 + 24) && v15 == 1 && *((_DWORD *)a3 + 1) == 3;
        *((_BYTE *)this + 208) = v19;
        *((_DWORD *)this + 53) = v19 ? v15 : 0;
        v20 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11) && !v13 && (v14 & 1) == 0;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
          1u,
          3u,
          v18);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v21,
          v22);
        if ( !v20
          || (updated = MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows((CAppThumbnailWindow ***)this - 2),
              updated >= 0) )
        {
          v23 = *(float *)a3;
          if ( *(_DWORD *)a3 != 1 )
          {
            updated = MultitaskingViewGestureHandler::ProcessTouchGestureInput((__int64)this - 16, 1);
            if ( updated < 0 )
            {
              v10 = 245LL;
              goto LABEL_9;
            }
            v23 = *(float *)a3;
          }
          v24 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
          v25 = v23;
          LOBYTE(v29) = !v24;
          v26 = 1;
          MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(&v26, (int *)&v25, &v29);
          return 0LL;
        }
        v10 = 240LL;
      }
      else
      {
        v10 = 199LL;
      }
    }
    else
    {
      v10 = 195LL;
    }
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB7,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
