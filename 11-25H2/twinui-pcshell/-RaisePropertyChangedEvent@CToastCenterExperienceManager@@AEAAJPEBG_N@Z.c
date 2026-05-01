/*
 * XREFs of ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800161A8
 * Callers:
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x18001604C (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180374970 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x1800165A8 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180016664 (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18002E170 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18002EA40 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030EF4 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003271C (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032A04 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032CF4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010CA98 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180207E10 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18021A89C (-EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CToastCenterExperienceManager::RaisePropertyChangedEvent(
        CToastCenterExperienceManager *this,
        const unsigned __int16 *a2,
        bool a3)
{
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax
  unsigned __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  UINT32 v16; // edx
  HRESULT v17; // eax
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  int v24; // edi
  struct Windows::Foundation::Collections::IPropertySet *v25; // r14
  struct Windows::Foundation::Collections::IPropertySet *v26; // rcx
  unsigned int v27; // eax
  UINT32 v28; // edx
  HRESULT v29; // eax
  int v30; // edx
  unsigned int v31; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v32; // r9
  int v33; // eax
  struct Windows::Foundation::Collections::IPropertySet *v34; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v35; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+20h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v37; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+48h] [rbp-B8h] BYREF
  void **v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  char v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+80h] [rbp-80h] BYREF
  const char *v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  char v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  _BYTE v48[152]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v49; // [rsp+140h] [rbp+40h]
  int v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v54[3]; // [rsp+170h] [rbp+70h] BYREF
  int v55; // [rsp+188h] [rbp+88h]
  int *v56; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v41 = 0;
  v42 = 0;
  v46 = 0;
  v43 = 0;
  v44 = "EM_RaiseApplicationEventActivity";
  v45 = 0LL;
  v47 = 0;
  v49 = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v50 = 1;
  v51 = 0LL;
  v52 = &v41;
  v53 = 0LL;
  v54[0] = 0LL;
  v54[1] = &v40;
  v54[2] = 0LL;
  v55 = 0;
  v56 = &v43;
  v40 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v40,
    a2,
    a3);
  if ( !*((_QWORD *)this + 16) )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v40);
LABEL_3:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v40, 0LL);
    v40 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v40);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v54);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v53);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v41);
    return 0LL;
  }
  v36 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    goto LABEL_33;
  }
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          string,
          &v36);
  LODWORD(v11) = v10;
  if ( v10 < 0 )
    goto LABEL_17;
  v37 = v36;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v37);
  string = 0LL;
  v11 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  if ( v14 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v12, v13);
    __debugbreak();
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v14);
  v16 = v15 - 1;
  if ( (unsigned int)v14 < v15 )
    v16 = v14;
  v17 = WindowsCreateStringReference(a2, v16, &hstringHeader, &string);
  if ( v17 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    __debugbreak();
  }
  LOBYTE(v20) = a3;
  v21 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v37, string, v19, v20);
  v24 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      (int)v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
    v35 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v35 + 16LL))(v35);
    }
    LODWORD(v11) = v24;
    goto LABEL_19;
  }
  v25 = v36;
  string = 0LL;
  do
    ++v11;
  while ( aPropertychange[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v22, v23);
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x339,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v36);
    v26 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 16LL))(v26);
    }
LABEL_19:
    v40 = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v40);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v54);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v53);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v41);
    return (unsigned int)v11;
  }
  v27 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11);
  v28 = v27 - 1;
  if ( (unsigned int)v11 < v27 )
    v28 = v11;
  v29 = WindowsCreateStringReference(L"PropertyChanged", v28, &hstringHeader, &string);
  if ( v29 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29, v30, v31);
    __debugbreak();
  }
  v33 = CSingleViewShellExperience::Reactivate((CToastCenterExperienceManager *)((char *)this + 104), string, v25, v32);
  LODWORD(v11) = v33;
  if ( v33 >= 0 )
  {
    ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
    v34 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33D,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v33,
    (int)v36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  ToastCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((ToastCenterTelemetry::EM_RaiseApplicationEventActivity *)&v40);
  return (unsigned int)v11;
}
