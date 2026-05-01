/*
 * XREFs of ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x1800F71BC
 * Callers:
 *     _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x180287344 (_lambda_9cd1b560a470dbb5c6e1d5da28bd3866_--operator().c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E3570 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180406D1C (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1800F7494 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x1800F757C (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     ??$CoCreateInstance@UIActivationHints@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIActivationHints@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1800F7C88 (--$CoCreateInstance@UIActivationHints@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIActiv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
_QWORD *__fastcall Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  void *v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int128 *, GUID *, __int64 *); // r14
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // rax
  int v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  __int128 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v22; // [rsp+B8h] [rbp+10h] BYREF
  LPVOID v23; // [rsp+C8h] [rbp+20h] BYREF

  v22 = a2;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
      (const char *)(unsigned int)v4,
      v12);
  v13 = 0LL;
  wil::com_query<IApplicationView,IWinRTApplicationView * &>(&v15, &v22);
  v23 = 0LL;
  v5 = *v15;
  v23 = 0LL;
  (*(void (__fastcall **)(__int64 *, LPVOID *))(v5 + 136))(v15, &v23);
  Win32ApplicationViewHelpers::GetAppViewFileName(&pv, a2);
  v6 = v23;
  if ( !v23 )
  {
    v10 = pv;
    if ( !pv )
      goto LABEL_8;
  }
  wil::CoCreateInstance<IActivationHints,wil::err_exception_policy>(&v22);
  v7 = *(__int64 (__fastcall **)(__int64, __int128 *, GUID *, __int64 *))(*(_QWORD *)v22 + 32LL);
  v13 = 0LL;
  *(_QWORD *)&v17 = v23;
  *((_QWORD *)&v17 + 1) = pv;
  v18 = 0LL;
  v19 = v17;
  v20 = 0LL;
  v8 = v7(v22, &v19, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, &v13);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
      (const char *)(unsigned int)v8,
      v12);
  v9 = v13;
  if ( !v13 )
  {
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v6 = v23;
    v10 = pv;
LABEL_8:
    if ( v10 )
    {
      CoTaskMemFree(v10);
      v6 = v23;
    }
    if ( v6 )
      CoTaskMemFree(v6);
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *a1 = 0LL;
    return a1;
  }
  v13 = 0LL;
  *a1 = v9;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v15 )
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return a1;
}
