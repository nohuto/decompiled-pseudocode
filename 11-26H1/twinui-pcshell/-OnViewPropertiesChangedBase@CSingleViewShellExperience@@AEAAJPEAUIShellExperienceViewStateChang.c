/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180174988
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006697C (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800207AC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ @ 0x180023140 (-UnstashPendingShow@CSingleViewShellExperience@@AEAA-AW4ShowOptions@1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180068034 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_180068034.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180068090 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180068BA8 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_180068BA8.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068BDC (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B3EA4 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180174EE0 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180174F44 (-StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180175104 (--1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x180175430 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x180175474 (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B99F0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING, struct IInspectable **); // rdi
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  bool v17; // r8
  int v18; // edi
  bool v19; // di
  __int64 *v20; // rbx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, HSTRING, struct IInspectable **); // rdi
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax
  bool v29; // r8
  int v30; // edi
  bool v31; // di
  __int64 *v32; // rbx
  __int64 v33; // rcx
  int v34; // edx
  DWORD v35; // edx
  __int64 v36; // rcx
  unsigned int v38; // eax
  int v39; // r8d
  __int64 *v40; // rcx
  int Boolean; // eax
  int Size; // eax
  int v43[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IInspectable *v44; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+40h] [rbp-C0h]
  int v48[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+50h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string[2]; // [rsp+70h] [rbp-90h] BYREF
  void **v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v53[272]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v54; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v55[48]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v5 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v52,
    (__int64)"OnViewPropertiesChangedBase");
  v52 = &SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)&v52,
    v5,
    StringRawBuffer);
  *(_QWORD *)v43 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v43);
  v7 = v6(a2, v43);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
    v40 = *(__int64 **)v43;
    if ( *(_QWORD *)v43 )
    {
      *(_QWORD *)v43 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
    }
    v52 = &SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v52);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v55);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v54);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
    return v8;
  }
  if ( !*(_QWORD *)v43 )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80004005LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v43);
LABEL_28:
    SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::~OnViewPropertiesChangedBase((SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *)&v52);
    return v8;
  }
  v9 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = *(_QWORD *)v43;
  if ( v9 )
  {
    *(_QWORD *)v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v45 = 0LL;
  v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          (char *)this + 32,
          &v45);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24B,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
    goto LABEL_28;
  }
  *(_QWORD *)v48 = 0LL;
  v49 = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v11 = v45;
  v12 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v45 + 48LL);
  *(_QWORD *)v43 = v48;
  v44 = 0LL;
  string[0] = 0LL;
  v13 = WindowsCreateStringReference(L"desiredSize", 0xBu, &hstringHeader, string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    goto LABEL_42;
  }
  v16 = v12(v11, string[0], &v44);
  v18 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x252,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16);
  v19 = v18 >= 0;
  string[0] = 0LL;
  v20 = *(__int64 **)v43;
  RoVariant::RoVariant((RoVariant *)&v46, v44, v17);
  v21 = *v20;
  *v20 = v46;
  v22 = *((_DWORD *)v20 + 2);
  *((_DWORD *)v20 + 2) = v47;
  if ( v21 && ((v22 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v19 )
  {
    v46 = *(_QWORD *)v48;
    v47 = v49;
    Size = RoVariant::Accessor::GetSize((RoVariant::Accessor *)&v46, (CSingleViewShellExperience *)((char *)this + 44));
    if ( Size < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x255,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)Size);
  }
  *((_BYTE *)this + 52) = 0;
  v23 = v45;
  v24 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v45 + 48LL);
  *(_QWORD *)v43 = v48;
  v44 = 0LL;
  string[0] = 0LL;
  v25 = WindowsCreateStringReference(L"fullScreen", 0xAu, &hstringHeader, string);
  if ( v25 < 0 )
  {
LABEL_42:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
    JUMPOUT(0x180174ED8LL);
  }
  v28 = v24(v23, string[0], &v44);
  v30 = v28;
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25F,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v28);
  v31 = v30 >= 0;
  string[0] = 0LL;
  v32 = *(__int64 **)v43;
  RoVariant::RoVariant((RoVariant *)&v46, v44, v29);
  v33 = *v32;
  *v32 = v46;
  v34 = *((_DWORD *)v32 + 2);
  *((_DWORD *)v32 + 2) = v47;
  if ( v33 && ((v34 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v31 )
  {
    v46 = *(_QWORD *)v48;
    v47 = v49;
    Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v46, (unsigned __int8 *)this + 52);
    if ( Boolean < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x261,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)Boolean);
  }
  (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
    *((_QWORD *)this + 11),
    this);
  if ( !*((_DWORD *)this + 10) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 10) = 1;
      v38 = CSingleViewShellExperience::UnstashPendingShow((__int64)this);
      *((_QWORD *)this + 8) = 0LL;
      if ( v39 == 1 )
        CSingleViewShellExperience::ShowViewAsync((__int64)this, v38);
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v52, v35);
  if ( *(_QWORD *)v48 && ((v49 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(**(_QWORD **)v48 + 16LL))();
  v36 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v52 = &SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v52);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v55);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v54);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
  return 0LL;
}
