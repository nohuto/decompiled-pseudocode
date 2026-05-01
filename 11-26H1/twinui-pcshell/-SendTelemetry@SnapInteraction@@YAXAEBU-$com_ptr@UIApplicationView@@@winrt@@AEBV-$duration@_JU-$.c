/*
 * XREFs of ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18008A350
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180269630 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008A42C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008A46C (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x1805AA6B8 (-SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::SendTelemetry(
        __int64 (__fastcall ****a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v6; // eax
  struct IApplicationView *v7; // rdx
  HWND WindowForView; // rdi
  __int128 v9; // rax
  __int64 v10; // rbx
  const unsigned __int16 *v11; // rsi
  __int64 v12; // rcx
  CSnapComponentTelemetry *v13; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  pv = 0LL;
  v4 = *a1;
  v5 = *v4;
  pv = 0LL;
  v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), LPVOID *))v5[17])(
         v4,
         &pv);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      (const char *)(unsigned int)v6,
      v14);
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(*a1, v7);
  v9 = *a2 * (__int128)0x112E0BE826D694B3LL;
  v10 = *a2 / 1000000000;
  v11 = (const unsigned __int16 *)pv;
  if ( CSnapComponentTelemetry::IsEnabled(v9 < 0, *((unsigned __int64 *)&v9 + 1)) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v12,
      _lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    CSnapComponentTelemetry::SnappedAppUsage_(v13, v11, WindowForView, v10);
  }
  if ( pv )
    CoTaskMemFree(pv);
}
