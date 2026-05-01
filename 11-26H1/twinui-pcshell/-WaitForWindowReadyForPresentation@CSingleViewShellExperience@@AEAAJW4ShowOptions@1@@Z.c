/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002098C
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800207AC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001F164 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180020960 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021208 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002130C (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180021484 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x180021738 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180072BA0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ??0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEBQ812@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z@Z @ 0x1802AF034 (--0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEB.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___ @ 0x1806812CC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1806812CC.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@Z @ 0x18068133C (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@I_ea_18068133C.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x1806814C4 (_lambda_71ae74f74888d637c85562ef224bc48a_--_lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_ @ 0x1806816C8 (_lambda_71ae74f74888d637c85562ef224bc48a_--__lambda_71ae74f74888d637c85562ef224bc48a_.c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180681A18 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __m128i v9; // xmm6
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int v16; // eax
  int v17; // ebx
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // esi
  int v29; // eax
  unsigned __int64 v30; // xmm0_8
  const unsigned __int16 *v31; // rdi
  const unsigned __int16 *v32; // rax
  int v33; // [rsp+28h] [rbp-E0h]
  int v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  int (*v36)(CSingleViewShellExperience *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *); // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  int v42[2]; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+A0h] [rbp-68h] BYREF
  char v44; // [rsp+A4h] [rbp-64h]
  int v45; // [rsp+C8h] [rbp-40h] BYREF
  const char *v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  char v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E8h] [rbp-20h]
  _BYTE v50[152]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v51; // [rsp+188h] [rbp+80h]
  int v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  int *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h] BYREF
  _QWORD v56[3]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v57; // [rsp+1D0h] [rbp+C8h]
  int *v58; // [rsp+1D8h] [rbp+D0h]
  _BYTE v59[352]; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  LODWORD(v36) = a2;
  v37[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 352LL))(*(_QWORD *)(a1 + 24), v37);
  v3 = *(_QWORD *)(a1 + 120) != 0LL;
  v4 = *(_DWORD *)(a1 + 72) != 0;
  v5 = v37[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v43 = 0;
  v44 = 0;
  v48 = 0;
  v45 = 0;
  v46 = "WaitForWindowReadyForPresentation";
  v47 = 0LL;
  v49 = 0;
  v51 = 0LL;
  memset_0(v50, 0, sizeof(v50));
  v8 = 1;
  v52 = 1;
  v53 = 0LL;
  v54 = &v43;
  v55 = 0LL;
  v56[0] = 0LL;
  v56[1] = v42;
  v56[2] = 0LL;
  v57 = 0;
  v58 = &v45;
  *(_QWORD *)v42 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v42,
    v7,
    StringRawBuffer,
    v5,
    v4,
    v3,
    *(_BYTE *)(a1 + 53));
  v9 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v41, v42, a1);
  *(__m128i *)&v38[1] = v9;
  LOBYTE(v39) = 1;
  v35 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  v11 = **v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  v12 = v11(v10, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v35);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x337,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12,
      v33);
    v14 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_4:
    LOBYTE(v39) = 0;
    lambda_6914baa2bbb41478f35591fe55a15932_::operator()(&v38[1]);
LABEL_5:
    *(_QWORD *)v42 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v42);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v56);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v55);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(&v43);
    return v13;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
LABEL_10:
    v17 = 0;
    goto LABEL_11;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), 4LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v16,
      v33);
  }
  else
  {
    *(_DWORD *)(a1 + 76) = 4;
    v17 = 0;
  }
  if ( v17 >= 0 )
    goto LABEL_10;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v17,
    v33);
LABEL_11:
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33A,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v17,
      v33);
  v18 = (char)v36;
  if ( ((unsigned __int8)v36 & 1) != 0
    || (v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)), v28 >= 0)
    || (v18 & 4) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 120) )
    {
      v36 = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
      v38[0] = a1;
      v19 = _lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_::_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_(v41, v38, &v36);
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e125143ae31b20b5bd0db8d36a87865c_>(
        v38,
        v19);
      v20 = *(_QWORD *)(a1 + 96);
      v40 = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      v36 = 0LL;
      v21 = v38[0];
      CMarshaledInterface::Marshal(&v36, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v38[0], 2LL);
      v22 = lambda_71ae74f74888d637c85562ef224bc48a_::_lambda_71ae74f74888d637c85562ef224bc48a_(
              (unsigned int)v59,
              (unsigned int)&v40,
              a1,
              (unsigned int)&v36,
              (__int64)v42);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___(
        v41,
        v22);
      lambda_71ae74f74888d637c85562ef224bc48a_::__lambda_71ae74f74888d637c85562ef224bc48a_(v59);
      v23 = v41[0];
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v35 + 80LL))(v35, v41[0], a1 + 120);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x374,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v24,
          v34);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v26 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v13 = v25;
        goto LABEL_4;
      }
      v8 = 0;
      LOBYTE(v39) = 0;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v27 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( v8 )
    {
      LOBYTE(v39) = 0;
      lambda_6914baa2bbb41478f35591fe55a15932_::operator()(&v38[1]);
    }
    v13 = 0;
    goto LABEL_5;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x340,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v29,
      v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  v30 = _mm_srli_si128(v9, 8).m128i_u64[0];
  v31 = WindowsGetStringRawBuffer(*(HSTRING *)(v30 + 16), 0LL);
  v32 = WindowsGetStringRawBuffer(*(HSTRING *)(v30 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v9.m128i_i64[0],
    v32,
    v31);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v42);
  return (unsigned int)v28;
}
