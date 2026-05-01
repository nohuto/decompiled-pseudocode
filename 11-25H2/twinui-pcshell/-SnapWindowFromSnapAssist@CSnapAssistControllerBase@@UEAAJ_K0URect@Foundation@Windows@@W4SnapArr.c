/*
 * XREFs of ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x180583D60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@@I@Z @ 0x180583E94 (-SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805849F8 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::SnapWindowFromSnapAssist(
        __int64 a1,
        HWND a2,
        __int64 a3,
        const struct Windows::Foundation::Rect *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // edi
  CSnapComponentTelemetry *v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // ecx
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( CSnapComponentTelemetry::IsEnabled(a1) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v9,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    v10 = a5;
    CSnapComponentTelemetry::SnapWindowFromSnapAssist_(v11, a2, a4, a5);
  }
  else
  {
    v10 = a5;
  }
  v12 = *((float *)a4 + 1) + *((float *)a4 + 3);
  v13 = *(float *)a4 + *((float *)a4 + 2);
  v14 = (int)*((float *)a4 + 1);
  v20[0] = (int)*(float *)a4;
  v20[1] = v14;
  v20[2] = (int)v13;
  v20[3] = (int)v12;
  CSnapAssistControllerBase::TryGetTabOwnerAndNotifyOfSwitch(a1 - 32, &v19, a2, v20, v10);
  if ( (_QWORD)v19 )
  {
    if ( !BYTE8(v19) )
      return 0LL;
    a2 = (HWND)v19;
  }
  if ( a2 )
  {
    v15 = *(__int64 **)(a1 + 104);
    v16 = *v15;
    v19 = *(_OWORD *)a4;
    v17 = (*(__int64 (__fastcall **)(__int64 *, HWND, __int64, __int128 *))(v16 + 56))(v15, a2, a3, &v19);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FF,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v17,
        v10);
  }
  return 0LL;
}
