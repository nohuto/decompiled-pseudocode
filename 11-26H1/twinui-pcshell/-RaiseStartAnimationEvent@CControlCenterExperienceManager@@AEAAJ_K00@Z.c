/*
 * XREFs of ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x18036DD50
 * Callers:
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D860 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018F54 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019A80 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x180074158 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180113974 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180113FAC (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_K00@Z @ 0x180224BE8 (-StartActivity@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemet.c)
 *     ?EventRaised@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802BAA5C (-EventRaised@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802BEED8 (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCe.c)
 *     ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802C4B8C (--1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CControlCenterExperienceManager::RaiseStartAnimationEvent(
        CControlCenterExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v22; // rbx
  HSTRING_HEADER *v23; // rax
  struct Windows::Foundation::Collections::IPropertySet *v24; // r9
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  _QWORD v30[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v30,
    (__int64)"EM_RaiseStartAnimationEventActivity");
  v30[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v30);
  if ( !*((_QWORD *)this + 18) )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v30);
    goto LABEL_16;
  }
  v27 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v29,
         (__int64 *)&v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
      v27);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_180719C60,
            v10);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v11[1].Reserved.Reserved1,
            v12,
            a2);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1003LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      goto LABEL_13;
    }
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_180719C68,
            v14);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v16[1].Reserved.Reserved1,
            v17,
            a3);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1004LL;
      goto LABEL_12;
    }
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_180719C50,
            v18);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v19[1].Reserved.Reserved1,
            v20,
            a4);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1005LL;
      goto LABEL_12;
    }
    v22 = v27;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075FF68,
            v21);
    v13 = CSingleViewShellExperience::Reactivate(
            (CControlCenterExperienceManager *)((char *)this + 120),
            (HSTRING)v23[1].Reserved.Reserved1,
            v22,
            v24);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1006LL;
      goto LABEL_12;
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::EventRaised((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
LABEL_16:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30, 0);
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
    *((_QWORD *)this + 98) = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
LABEL_17:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::~EM_RaiseStartAnimationEventActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *)v30);
  return v9;
}
