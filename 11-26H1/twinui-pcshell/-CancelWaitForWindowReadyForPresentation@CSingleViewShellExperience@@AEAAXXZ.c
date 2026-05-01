/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800C0DB4
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800207AC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180022B60 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800C0C28 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1802AC190 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EE70 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002114C (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18002114C.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021208 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002130C (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180021484 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x18007E6AC (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A6E34 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  void **v8; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[272]; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v10; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v11[48]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( this[15] )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
    v3 = WindowsGetStringRawBuffer(this[1], 0LL);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v8,
      (__int64)"CancelWaitForWindowReadyForPresentation");
    v8 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
    SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StartActivity(
      (SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)&v8,
      v3,
      StringRawBuffer,
      1);
    *(_QWORD *)v7 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3,
           (__int64 *)v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DB,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**(_QWORD **)v7 + 88LL))(*(_QWORD *)v7, this[15]);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DD,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v5);
      this[15] = 0LL;
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(&v8);
    v6 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 )
    {
      *(_QWORD *)v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v8 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v8);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v10);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
}
