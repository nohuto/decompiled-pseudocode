/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001A3B4
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180019CBC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001A388 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001AD68 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001AF7C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18001B100 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001CCB0 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180051C40 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DB108 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___ @ 0x18065B1F8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18065B1F8.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x18065B30C (_lambda_71ae74f74888d637c85562ef224bc48a_--_lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x18065B50C (_lambda_71ae74f74888d637c85562ef224bc48a_--__lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x18065B854 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, int a2)
{
  bool v3; // r15
  bool v4; // si
  unsigned int v5; // r14d
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  char v8; // r12
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v15; // eax
  int v16; // ebx
  char v17; // bl
  int v18; // edi
  _OWORD *v19; // rax
  _OWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  const unsigned __int16 *v29; // rbx
  const unsigned __int16 *v30; // rax
  int v31; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+28h] [rbp-E0h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v35[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  __int128 v40; // [rsp+88h] [rbp-80h]
  int v41[2]; // [rsp+98h] [rbp-70h] BYREF
  int v42; // [rsp+A0h] [rbp-68h] BYREF
  char v43; // [rsp+A4h] [rbp-64h]
  int v44; // [rsp+C8h] [rbp-40h] BYREF
  const char *v45; // [rsp+D0h] [rbp-38h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  char v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E8h] [rbp-20h]
  _BYTE v49[152]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v50; // [rsp+188h] [rbp+80h]
  int v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  int *v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h] BYREF
  _QWORD v55[3]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v56; // [rsp+1D0h] [rbp+C8h]
  int *v57; // [rsp+1D8h] [rbp+D0h]
  _BYTE v58[352]; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  LODWORD(v34) = a2;
  v35[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 352LL))(*(_QWORD *)(a1 + 24), v35);
  v3 = *(_QWORD *)(a1 + 120) != 0LL;
  v4 = *(_DWORD *)(a1 + 72) != 0;
  v5 = v35[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v42 = 0;
  v43 = 0;
  v47 = 0;
  v44 = 0;
  v45 = "WaitForWindowReadyForPresentation";
  v46 = 0LL;
  v48 = 0;
  v50 = 0LL;
  memset_0(v49, 0, sizeof(v49));
  v8 = 1;
  v51 = 1;
  v52 = 0LL;
  v53 = &v42;
  v54 = 0LL;
  v55[0] = 0LL;
  v55[1] = v41;
  v55[2] = 0LL;
  v56 = 0;
  v57 = &v44;
  *(_QWORD *)v41 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v41,
    v7,
    StringRawBuffer,
    v5,
    v4,
    v3,
    *(_BYTE *)(a1 + 53));
  v36[0] = v41;
  v36[1] = a1;
  LOBYTE(v37) = 1;
  v33 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  v10 = **v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v11 = v10(v9, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x337,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v11,
      v31);
    v13 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
LABEL_4:
    LOBYTE(v37) = 0;
    lambda_6914baa2bbb41478f35591fe55a15932_::operator()(v36);
LABEL_5:
    *(_QWORD *)v41 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v55);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v54);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(&v42);
    return v12;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
LABEL_10:
    v16 = 0;
    goto LABEL_11;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), 4LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v15,
      v31);
  }
  else
  {
    *(_DWORD *)(a1 + 76) = 4;
    v16 = 0;
  }
  if ( v16 >= 0 )
    goto LABEL_10;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v16,
    v31);
LABEL_11:
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33A,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16,
      v31);
  v17 = v34;
  if ( (v34 & 1) != 0
    || (v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v18 >= 0)
    || (v17 & 4) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      *(_QWORD *)&v40 = a1;
      *((_QWORD *)&v40 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
      v19 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      if ( v19 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(v19);
        v20[1] = v40;
        *(_QWORD *)v20 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e2a4807c8e61afd010bc972c5955136a_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      *(_QWORD *)&v40 = v20;
      v21 = *(_QWORD *)(a1 + 96);
      v38 = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      v34 = 0LL;
      CMarshaledInterface::Marshal(&v34, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v20, 2LL);
      v22 = lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_(
              (unsigned int)v58,
              (unsigned int)&v38,
              a1,
              (unsigned int)&v34,
              (__int64)v41);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___(
        &v39,
        v22);
      lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_(v58);
      v23 = v39;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, v39, a1 + 120);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x374,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v24,
          v32);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v20 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v20 + 16LL))(v20);
        v26 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v12 = v25;
        goto LABEL_4;
      }
      v8 = 0;
      LOBYTE(v37) = 0;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v20 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v27 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( v8 )
    {
      LOBYTE(v37) = 0;
      lambda_6914baa2bbb41478f35591fe55a15932_::operator()(v36);
    }
    v12 = 0;
    goto LABEL_5;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x340,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v28,
      v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v29 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v30 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v41,
    v30,
    v29);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v41);
  return (unsigned int)v18;
}
