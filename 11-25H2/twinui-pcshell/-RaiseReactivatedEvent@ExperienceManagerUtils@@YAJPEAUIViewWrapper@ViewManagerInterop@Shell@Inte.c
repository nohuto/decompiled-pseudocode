/*
 * XREFs of ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18002EBBC
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18002E4D0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18002EA40 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x18010CAD0 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020994 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180020A44 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180020C58 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_180020C58.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002EA74 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflector_ea_18002EA74.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x1800306C4 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180051148 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x1801B0710 (Windows--Internal--ComTaskPool--QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18021C294 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_18021C294.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ExperienceManagerUtils::RaiseReactivatedEvent(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6)
{
  const unsigned __int16 *StringRawBuffer; // rsi
  const unsigned __int16 *v10; // rdi
  const unsigned __int16 *v11; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  __int64 v13; // rsi
  HRESULT v14; // eax
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING, int *); // rdi
  int v19; // eax
  __int64 v20; // rcx
  HSTRING v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-D0h] BYREF
  HRESULT v33; // [rsp+38h] [rbp-C8h]
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v37; // [rsp+58h] [rbp-A8h] BYREF
  HRESULT v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v41[41]; // [rsp+78h] [rbp-88h] BYREF
  void **v42; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v43[272]; // [rsp+1C8h] [rbp+C8h] BYREF
  volatile signed __int32 *v44; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v45[48]; // [rsp+2E0h] [rbp+1E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v34 = (unsigned int)a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = WindowsGetStringRawBuffer(a4, 0LL);
  v11 = WindowsGetStringRawBuffer(a3, 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v42);
  v42 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  SingleViewExperienceTelemetry::Reactivate::StartActivity(
    (SingleViewExperienceTelemetry::Reactivate *)&v42,
    v11,
    v10,
    StringRawBuffer);
  if ( !this || (v13 = ExperienceManagerUtils::WindowFromViewWrapper(this, v12)) == 0 )
  {
    v15 = -2147023496;
    goto LABEL_32;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v14 = WindowsDuplicateString(string, &newString);
  v15 = v14;
  v33 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)v30 = 0LL;
    if ( a6 )
    {
      v31 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
      v16 = RoCreatePropertySetSerializer(&v31);
      v15 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v16,
          v30[0]);
        v26 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_16;
      }
      v17 = v31;
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v31 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
      v19 = v18(v17, a6, v30);
      v15 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v19,
          v30[0]);
        v28 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        v29 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        goto LABEL_16;
      }
      v20 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v15 = v33;
    }
    v35 = 0LL;
    v36 = v13;
    v37 = 0LL;
    v38 = v15;
    if ( v15 >= 0 )
    {
      v21 = newString;
      WindowsDeleteString(0LL);
      v38 = WindowsDuplicateString(v21, &v37);
    }
    v39 = *(_QWORD *)v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v39);
    v40 = v35;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v41,
      (__int64)&v42);
    v41[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___(v23, v22, v34, &v36);
    SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    WindowsDeleteString(v37);
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      v24 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 )
      {
        *(_QWORD *)v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v15 = 0;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v15,
      v30[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
    WindowsDeleteString(newString);
    newString = 0LL;
LABEL_32:
    SingleViewExperienceTelemetry::Reactivate::~Reactivate((SingleViewExperienceTelemetry::Reactivate *)&v42);
    return (unsigned int)v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v14,
    v30[0]);
LABEL_16:
  WindowsDeleteString(newString);
  newString = 0LL;
  v42 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v42);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v45);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v43);
  return (unsigned int)v15;
}
