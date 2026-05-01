/*
 * XREFs of ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18029C000
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180108F20 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180240D28 (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029C0FC (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029C13C (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

HWND __fastcall XamlSnapAssistViewHost::GetSnapAssistZOrder(
        XamlSnapAssistViewHost *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm1_4
  float v4; // xmm0_4
  LONG v5; // r10d
  float v6; // xmm1_4
  LONG v7; // r9d
  float v8; // xmm0_4
  char v9; // dl
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  XamlSwitcherTelemetry *v13; // rcx
  HWND v15; // [rsp+20h] [rbp-50h] BYREF
  HWND v16; // [rsp+28h] [rbp-48h] BYREF
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v18; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)a2 + 1);
  v4 = *(float *)a2;
  v15 = 0LL;
  v16 = 0LL;
  v5 = (int)v2;
  lParam[0] = (LPARAM)this;
  v6 = v2 + *((float *)a2 + 3);
  v7 = (int)v4;
  v18.top = v5;
  v8 = v4 + *((float *)a2 + 2);
  v18.left = v7;
  v18.bottom = (int)v6;
  lParam[1] = (LPARAM)&v18;
  lParam[2] = (LPARAM)&v16;
  lParam[3] = (LPARAM)&v15;
  v18.right = (int)v8;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___,
    (LPARAM)lParam);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v9);
  if ( !v15 )
    v15 = (HWND)*((_QWORD *)this + 88);
  if ( XamlSwitcherTelemetry::IsEnabled(v11, v10) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v12,
      _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::SnapAssistZOrder_(v13, &v18, v15, v16);
  }
  return v15;
}
