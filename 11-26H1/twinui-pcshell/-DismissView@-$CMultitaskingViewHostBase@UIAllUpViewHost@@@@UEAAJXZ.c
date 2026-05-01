/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804AEF10
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___::_ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___ @ 0x1806A06C8 (wil--details--ScopeExitFn__lambda_b59f115cc630b15b12eeb917ceb9447b___--_ScopeExitFn__lambda_b59f.c)
 *     _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x1806A0C58 (_lambda_6e770df948d8a5a9abf49638b3e35dc3_--operator().c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1390 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A1590 (-DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::Invoke @ 0x1806A1870 (Platform--Details--__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_--Invoke.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1EA0 (-OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A2870 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800775D8 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1800791A0 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18021F130 (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x18029CE54 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18029CE54.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802C4B08 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$QueueTask@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_2982927e39568cdd3df99df702aa65a9_@@@Z @ 0x1804AED64 (--$QueueTask@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(__int64 a1)
{
  int *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v13[42]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v11 = (a1 + 24) & -(__int64)(a1 != 0);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  *(_BYTE *)(a1 + 112) = 0;
  v2 = (int *)(a1 + 72);
  MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(
    (struct wil::details::IFailureCallback *)v13,
    (int *)(a1 + 72));
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  *(_QWORD *)v7 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 80),
         (__int64 *)v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v8 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v9 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
    v10 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_2982927e39568cdd3df99df702aa65a9_>(v5, &v9);
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)&v9);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), (unsigned int)*v2);
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v13, *v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\MultitaskingView\\inc\\BaseViewHost.h",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v7);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(v13);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v4;
}
