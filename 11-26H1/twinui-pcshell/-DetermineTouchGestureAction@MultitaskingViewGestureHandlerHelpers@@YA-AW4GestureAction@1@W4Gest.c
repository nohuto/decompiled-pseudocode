/*
 * XREFs of ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025386C
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049AC40 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049CB70 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049D460 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(int a1, char a2, char a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive() )
  {
    if ( (a3 & 1) == 0 && (unsigned int)(a1 - 3) <= 1 && (a3 & 2) == 0 )
      return 8;
  }
  else if ( (a3 & 1) == 0 )
  {
    if ( (unsigned int)(a1 - 3) > 1 || (a3 & 2) != 0 )
    {
      if ( a1 == 1 )
      {
        if ( (a3 & 2) == 0 )
          return a2 != 0 ? 4 : 1;
      }
      else if ( a1 == 2 )
      {
        if ( a2 )
        {
          if ( (a3 & 2) == 0 )
            return v6;
        }
        else if ( (a3 & 2) == 0 )
        {
          return 3;
        }
        return 2;
      }
    }
    else
    {
      return 8;
    }
  }
  return v6;
}
