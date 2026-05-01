/*
 * XREFs of _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049A2EC
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::RunTask @ 0x18049D1B0 (CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x1801DB3F0 (-GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029583C (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029587C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x1802AD614 (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499C08 (--1-$com_ptr_t@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wi.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180499CE4 (--1-$test_watcher@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18049E07C (-start@-$tip_test@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@X.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x1804AA1A8 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 *     ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x1804AA898 (-SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5f246d3d225ef97a552fc7098e7c8139_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  HWND v5; // r9
  signed int v6; // ebx
  int v7; // r9d
  __int64 (__fastcall *v8)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // r9d
  __int64 (__fastcall *v13)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // r9d
  HWND WindowW; // rax
  BOOL v23; // ebx
  int v24; // esi
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  const char *v28; // r9
  MultitaskingViewTelemetry *v29; // rcx
  __int64 v30; // rdx
  BOOL v31; // ebx
  int v32; // esi
  int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rcx
  MultitaskingViewTelemetry *v36; // rcx
  __int64 (__fastcall *v38)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // r9d
  __int64 (__fastcall *v43)(__int64, __int64, GUID *, volatile signed __int32 **); // rbx
  __int64 v44; // rdx
  unsigned int v45; // eax
  int v46; // r9d
  volatile signed __int32 *v47; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v48[2]; // [rsp+38h] [rbp-48h] BYREF
  void **v49; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v50[40]; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v47 = 0LL;
      v43 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      v6 = v43(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v47);
      if ( v6 >= 0 )
      {
        v45 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, bool))(*(_QWORD *)v47 + 48LL))(
                v47,
                *(_QWORD *)(a1 + 8),
                *(_QWORD *)(a1 + 16),
                *(_DWORD *)(a1 + 40) == 2);
        v6 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
               (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
               *(_DWORD *)(a1 + 40),
               v45,
               v46);
        if ( v6 >= 0 )
          break;
        v44 = 677LL;
      }
      else
      {
        v44 = 668LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v6);
      break;
    case 2:
      v47 = 0LL;
      v38 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      v39 = v38(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v47);
      v6 = v39;
      if ( v39 >= 0 )
      {
        v41 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 64LL))(v47);
        v39 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
                *(_DWORD *)(a1 + 40),
                v41,
                v42);
        v6 = v39;
        if ( v39 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
          return 0LL;
        }
        v40 = 687LL;
      }
      else
      {
        v40 = 684LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v39);
      break;
    case 3:
      v31 = MultitaskingViewGestureHandlerHelpers::RaiseDesktop((MultitaskingViewGestureHandlerHelpers *)a1);
      v32 = *(_DWORD *)(a1 + 40);
      v33 = *(_DWORD *)(a1 + 24);
      if ( MultitaskingViewTelemetry::IsEnabled(v34) )
      {
        wil::details::static_lazy<MultitaskingViewTelemetry>::get(
          v35,
          (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        MultitaskingViewTelemetry::GestureActionResult_(v36, v33, v32, v31);
      }
      if ( v31 )
        return 0LL;
      v30 = 695LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v30,
               (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v28);
    case 4:
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      v23 = PostMessageW(WindowW, 0x579u, 2uLL, 0LL);
      v24 = *(_DWORD *)(a1 + 40);
      v25 = *(_DWORD *)(a1 + 24);
      if ( MultitaskingViewTelemetry::IsEnabled(v26) )
      {
        wil::details::static_lazy<MultitaskingViewTelemetry>::get(
          v27,
          (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        MultitaskingViewTelemetry::GestureActionResult_(v29, v25, v24, v23);
      }
      if ( v23 )
        return 0LL;
      v30 = 703LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v30,
               (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v28);
    case 5:
      v47 = 0LL;
      v16 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      v17 = 1;
      v18 = v16(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v47);
      v6 = v18;
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 40) != 2 )
          v17 = 4;
        v20 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v47 + 48LL))(
                v47,
                *(_QWORD *)(a1 + 16),
                v17,
                *(_QWORD *)(a1 + 32));
        v18 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
                *(_DWORD *)(a1 + 40),
                v20,
                v21);
        v6 = v18;
        if ( v18 >= 0 )
          break;
        v19 = 718LL;
      }
      else
      {
        v19 = 710LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v18);
      break;
    case 6:
      v47 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      v14 = v13(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v47);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v48[0] = *(_QWORD *)a1;
        v14 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *))(*(_QWORD *)v47 + 72LL))(v47, v48);
        v6 = v14;
        if ( v14 >= 0 )
          break;
        v15 = 727LL;
      }
      else
      {
        v15 = 725LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v14);
      break;
    case 7:
      v47 = 0LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      v9 = v8(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v47);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 734LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v9);
        break;
      }
      v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 64LL))(v47);
      v9 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
             (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
             *(_DWORD *)(a1 + 40),
             v11,
             v12);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 737LL;
        goto LABEL_19;
      }
      break;
    case 8:
      v47 = 0LL;
      tip2::tip_test<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>::start(&v47, v48);
      v49 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v50,
        (struct wil::details::IFailureCallback *)&v49,
        0LL,
        1);
      v51 = v47;
      if ( v47 )
        _InterlockedAdd(v47 + 68, 1u);
      wil::com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>((void **)&v47);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
        1u,
        v4);
      v6 = MultitaskingViewGestureHandlerHelpers::SwitchToWindow(
             *(MultitaskingViewGestureHandlerHelpers **)(a1 + 64),
             *(struct IApplicationViewCollection **)(a1 + 56),
             *(struct IApplicationViewSwitcher **)(a1 + 72),
             v5);
      MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        (MultitaskingViewGestureTelemetry *)*(unsigned int *)(a1 + 24),
        *(_DWORD *)(a1 + 40),
        v6,
        v7);
      if ( v6 >= 0 )
        tip2::details::shared_data<0,0,0>::complete_without_lock((__int64)(v51 + 2));
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FE,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v6);
      tip2::test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>::~test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>((__int64)&v49);
      return (unsigned int)v6;
    default:
      return 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
  return (unsigned int)v6;
}
