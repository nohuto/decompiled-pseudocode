/*
 * XREFs of _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x180489680
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::RunTask @ 0x18048C5B0 (CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x1801E5C00 (-GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D9B8 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D9F8 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A72E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x1802B6480 (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180489028 (--1-$com_ptr_t@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wi.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180489104 (--1-$test_watcher@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18048D444 (-start@-$tip_test@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@X.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x1804992F8 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 *     ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x1804999E4 (-SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5f246d3d225ef97a552fc7098e7c8139_::operator()(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  MultitaskingViewGestureHandlerHelpers *v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  HWND v13; // r9
  signed int v14; // ebx
  int v15; // r9d
  __int64 (__fastcall *v16)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // r9d
  __int64 (__fastcall *v21)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  unsigned int v25; // esi
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // r9d
  HWND WindowW; // rax
  BOOL v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rcx
  const char *v34; // r9
  MultitaskingViewTelemetry *v35; // rcx
  __int64 v36; // rdx
  BOOL v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  MultitaskingViewTelemetry *v40; // rcx
  __int64 (__fastcall *v42)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // eax
  int v46; // r9d
  __int64 (__fastcall *v47)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  __int64 v48; // rdx
  unsigned int v49; // eax
  int v50; // r9d
  volatile signed __int32 *v51; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v52[2]; // [rsp+38h] [rbp-48h] BYREF
  void **v53; // [rsp+48h] [rbp-38h] BYREF
  char v54[40]; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v55; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 24) - 1;
  if ( !v4 )
  {
    v51 = 0LL;
    v47 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    v14 = v47(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v51);
    if ( v14 >= 0 )
    {
      v49 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, bool))(*(_QWORD *)v51 + 48LL))(
              v51,
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 16),
              *(_DWORD *)(a1 + 40) == 2);
      v14 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
              (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
              *(_DWORD *)(a1 + 40),
              v49,
              v50);
      if ( v14 >= 0 )
        goto LABEL_56;
      v48 = 677LL;
    }
    else
    {
      v48 = 668LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_56;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v51 = 0LL;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    v43 = v42(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v51);
    v14 = v43;
    if ( v43 >= 0 )
    {
      v45 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 64LL))(v51);
      v43 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
              (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
              *(_DWORD *)(a1 + 40),
              v45,
              v46);
      v14 = v43;
      if ( v43 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
        return 0LL;
      }
      v44 = 687LL;
    }
    else
    {
      v44 = 684LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v43);
    goto LABEL_56;
  }
  v6 = (MultitaskingViewGestureHandlerHelpers *)(unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    v37 = MultitaskingViewGestureHandlerHelpers::RaiseDesktop(v6);
    if ( MultitaskingViewTelemetry::IsEnabled(v38) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v39,
        (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::GestureActionResult_(v40, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 40), v37);
    }
    if ( v37 )
      return 0LL;
    v36 = 695LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v36,
             (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v34);
  }
  v7 = (_DWORD)v6 - 1;
  if ( !v7 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    v31 = PostMessageW(WindowW, 0x579u, 2uLL, 0LL);
    if ( MultitaskingViewTelemetry::IsEnabled(v32) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v33,
        (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::GestureActionResult_(v35, *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 40), v31);
    }
    if ( v31 )
      return 0LL;
    v36 = 703LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v36,
             (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v34);
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v51 = 0LL;
      v21 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
      v22 = v21(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v51);
      v14 = v22;
      if ( v22 >= 0 )
      {
        v52[0] = *(_QWORD *)a1;
        v22 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *))(*(_QWORD *)v51 + 72LL))(v51, v52);
        v14 = v22;
        if ( v22 >= 0 )
          goto LABEL_56;
        v23 = 727LL;
      }
      else
      {
        v23 = 725LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_56;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v51 = 0LL;
        tip2::tip_test<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>::start(&v51, v52);
        v53 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
        wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
          (wil::details::ThreadFailureCallbackHolder *)v54,
          (struct wil::details::IFailureCallback *)&v53,
          0LL,
          1);
        v55 = v51;
        if ( v51 )
          _InterlockedAdd(v51 + 66, 1u);
        wil::com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>((void **)&v51);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v11,
          v12);
        v14 = MultitaskingViewGestureHandlerHelpers::SwitchToWindow(
                *(MultitaskingViewGestureHandlerHelpers **)(a1 + 64),
                *(struct IApplicationViewCollection **)(a1 + 56),
                *(struct IApplicationViewSwitcher **)(a1 + 72),
                v13);
        MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
          (MultitaskingViewGestureTelemetry *)8,
          *(_DWORD *)(a1 + 40),
          v14,
          v15);
        if ( v14 >= 0 )
          tip2::details::shared_data<0,0,0>::complete_without_lock((__int64)(v55 + 2));
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FE,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
            (const char *)(unsigned int)v14);
        tip2::test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>::~test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>((__int64)&v53);
        return (unsigned int)v14;
      }
      return 0LL;
    }
    v51 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    v17 = v16(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v51);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 734LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_56;
    }
    v19 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 64LL))(v51);
    v17 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
            (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
            *(_DWORD *)(a1 + 40),
            v19,
            v20);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 737LL;
      goto LABEL_19;
    }
  }
  else
  {
    v51 = 0LL;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
    v25 = 1;
    v26 = v24(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v51);
    v14 = v26;
    if ( v26 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 40) != 2 )
        v25 = 4;
      v28 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v51 + 48LL))(
              v51,
              *(_QWORD *)(a1 + 16),
              v25,
              *(_QWORD *)(a1 + 32));
      v26 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
              (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
              *(_DWORD *)(a1 + 40),
              v28,
              v29);
      v14 = v26;
      if ( v26 >= 0 )
        goto LABEL_56;
      v27 = 718LL;
    }
    else
    {
      v27 = 710LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v26);
  }
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
  return (unsigned int)v14;
}
