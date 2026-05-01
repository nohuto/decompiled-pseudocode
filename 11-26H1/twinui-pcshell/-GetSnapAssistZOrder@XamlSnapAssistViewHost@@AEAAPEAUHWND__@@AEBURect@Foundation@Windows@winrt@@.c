/*
 * XREFs of ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1802930B8
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801AEED0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180231ABC (-SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x1802931BC (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029321C (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

HWND __fastcall XamlSnapAssistViewHost::GetSnapAssistZOrder(
        XamlSnapAssistViewHost *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  LONG v4; // eax
  float v6; // xmm0_4
  LONG v7; // eax
  float v8; // xmm1_4
  LPARAM v9; // rax
  char v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  XamlSwitcherTelemetry *v14; // rcx
  HWND v16; // [rsp+30h] [rbp-50h] BYREF
  HWND v17; // [rsp+38h] [rbp-48h] BYREF
  char v18; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v19; // [rsp+60h] [rbp-20h] BYREF

  v2 = *(float *)a2;
  v3 = *((float *)a2 + 1);
  v4 = (int)*(float *)a2;
  v16 = 0LL;
  v17 = 0LL;
  v6 = v2 + *((float *)a2 + 2);
  v19.left = v4;
  v7 = (int)v3;
  v8 = v3 + *((float *)a2 + 3);
  v19.top = v7;
  v19.right = (int)v6;
  v19.bottom = (int)v8;
  v9 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
         (unsigned int)&v18,
         (_DWORD)this,
         (unsigned int)&v19,
         (unsigned int)&v17,
         (__int64)&v16);
  EnumWindows((WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___, v9);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v10);
  if ( !v16 )
    v16 = (HWND)*((_QWORD *)this + 88);
  if ( XamlSwitcherTelemetry::IsEnabled(v12, v11) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v13,
      _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::SnapAssistZOrder_(v14, &v19, v16, v17);
  }
  return v16;
}
