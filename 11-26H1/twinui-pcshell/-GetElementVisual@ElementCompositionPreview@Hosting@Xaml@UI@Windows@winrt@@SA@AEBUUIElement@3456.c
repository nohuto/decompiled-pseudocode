/*
 * XREFs of ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802B5924
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x1802184F4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?CreateAnimation@TouchEdgeGripperWindow@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MMUhstring@6@H@Z @ 0x180598D38 (-CreateAnimation@TouchEdgeGripperWindow@@AEAA-AUScalarKeyFrameAnimation@Composition@UI@Windows@w.c)
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18059AE24 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 * Callees:
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x18059751C (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 */

const struct winrt::Windows::UI::Xaml::UIElement *__fastcall winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual(
        const struct winrt::Windows::UI::Xaml::UIElement *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DC8D8;
  _InterlockedIncrement64(&qword_1808DC8D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>);
    _InterlockedDecrement64(&qword_1808DC8D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC8D8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::call<_lambda_03a02509df9e18a447667afbdd5db963_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
