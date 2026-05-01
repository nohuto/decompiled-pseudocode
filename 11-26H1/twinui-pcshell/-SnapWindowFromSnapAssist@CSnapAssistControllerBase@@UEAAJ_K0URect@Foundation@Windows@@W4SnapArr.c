/*
 * XREFs of ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008A42C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008A46C (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@@I@Z @ 0x1805A7CD0 (-SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A8894 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::SnapWindowFromSnapAssist(
        __int64 a1,
        HWND a2,
        __int64 a3,
        __int128 *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // edi
  CSnapComponentTelemetry *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // eax
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( CSnapComponentTelemetry::IsEnabled(a1) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v9,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    v10 = a5;
    CSnapComponentTelemetry::SnapWindowFromSnapAssist_(v11, a2, (const struct Windows::Foundation::Rect *)a4, a5);
  }
  else
  {
    v10 = a5;
  }
  v12 = *((float *)a4 + 1);
  v13 = *(float *)a4;
  v18[0] = (int)*(float *)a4;
  v18[1] = (int)v12;
  v18[2] = (int)(float)(v13 + *((float *)a4 + 2));
  v18[3] = (int)(float)(v12 + *((float *)a4 + 3));
  CSnapAssistControllerBase::TryGetTabOwnerAndNotifyOfSwitch(a1 - 32, &v17, a2, v18, v10);
  if ( (_QWORD)v17 )
  {
    if ( !BYTE8(v17) )
      return 0LL;
    a2 = (HWND)v17;
  }
  if ( a2 )
  {
    v14 = *(_QWORD *)(a1 + 104);
    v17 = *a4;
    v15 = (*(__int64 (__fastcall **)(__int64, HWND, __int64, __int128 *))(*(_QWORD *)v14 + 56LL))(v14, a2, a3, &v17);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x200,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v15,
        v10);
  }
  return 0LL;
}
