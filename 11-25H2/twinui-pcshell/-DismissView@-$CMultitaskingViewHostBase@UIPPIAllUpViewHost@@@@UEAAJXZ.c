/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x18049E430
 * Callers:
 *     wil::details::ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___::_ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___ @ 0x18049E268 (wil--details--ScopeExitFn__lambda_54295168da1cdab7af8f519384f2783d___--_ScopeExitFn__lambda_5429.c)
 *     ?DismissViewForDrag@CPPIAllUpViewHost@@UEAAXXZ @ 0x18049E620 (-DismissViewForDrag@CPPIAllUpViewHost@@UEAAXXZ.c)
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18049EB80 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180067A40 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012DE20 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18012E0F0 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ??$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA?AV01@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18012EBF8 (--$Start@AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@SA-AV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1802A4454 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802A4454.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@Z @ 0x1802A50C4 (--$Make@V-$CTaskWrapper@V_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_@@@ComTaskPool@Internal@Window.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802CD6D8 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView(__int64 a1)
{
  int *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 *v17[42]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v15 = (a1 + 24) & -(__int64)(a1 != 0);
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v15, 1);
  *(_BYTE *)(a1 + 112) = 0;
  v2 = (int *)(a1 + 72);
  MultitaskingViewTelemetry::DismissMultitaskingView::Start<enum MULTITASKING_VIEW_TYPES &>(
    (struct wil::details::IFailureCallback *)v17,
    (int *)(a1 + 72));
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v10 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 80),
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v14 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v5 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>,_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>(
           &v11,
           (volatile signed __int32 *)&v13);
    v6 = *v5;
    *v5 = 0LL;
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
    }
    CurrentThreadId = GetCurrentThreadId();
    SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
    if ( v6 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)&v13);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), (unsigned int)*v2);
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v17, *v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
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
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(v17);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v15);
  return v4;
}
