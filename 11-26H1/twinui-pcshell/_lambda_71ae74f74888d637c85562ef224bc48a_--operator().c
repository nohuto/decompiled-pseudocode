/*
 * XREFs of _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180681A80
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x180681F70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180681F70.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180164F44 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1801BB344 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1801D3C7C (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801F4628 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180681984 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_71ae74f74888d637c85562ef224bc48a_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-49h] BYREF
  __int64 v15; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-39h] BYREF
  char v17; // [rsp+48h] [rbp-21h]
  _BYTE v18[112]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v20; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v6 = a1 + 24;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v18);
  v14 = 0LL;
  v16[0] = v6;
  v16[1] = &v14;
  v16[2] = *(_QWORD *)(a1 + 8);
  v17 = 1;
  v21 = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v21) >= 0 )
  {
    v22 = v21;
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(v6, &v22);
  }
  v7 = ExperienceManagerUtils::AsStrong<IInspectable>(&v22, (_QWORD *)a1);
  v8 = 0LL;
  if ( &v15 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
  }
  v15 = v14;
  v14 = v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( !v14 )
    goto LABEL_16;
  v20 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v20 )
    {
      v22 = 0LL;
      v11 = CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
              (__int64 *)(a1 + 16),
              &v22);
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = 874LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        goto LABEL_17;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, a2, a3);
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = 875LL;
        goto LABEL_11;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x36F,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x80070015LL);
    }
LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x365,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v9);
LABEL_17:
  v17 = 0;
  lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator()((__int64)v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
  return v10;
}
