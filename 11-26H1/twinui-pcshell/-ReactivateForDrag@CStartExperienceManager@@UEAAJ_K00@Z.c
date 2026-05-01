/*
 * XREFs of ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x18038A580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x180074158 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@01@@Z @ 0x180113C3C (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHS.c)
 *     ??$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ_KPEAPEAUIInspectable@@@Z1@Z @ 0x180113FAC (--$SetValue@_K@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ReportReactivatingForDrag@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K00@Z @ 0x18038A9AC (-ReportReactivatingForDrag@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartContro.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x18038B370 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CStartExperienceManager::ReactivateForDrag(
        CStartExperienceManager *this,
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
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    if ( *((_QWORD *)this + 68) )
      winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::ReportReactivatingForDrag(
        (char *)this + 544,
        a2,
        a3,
        a4);
    return 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v27 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v8 = Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IPropertySet>(v29, &v27);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x460,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_16:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
      return v9;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
      v27);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_180760098,
            v10);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v11[1].Reserved.Reserved1,
            v12,
            a2);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1122LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      goto LABEL_16;
    }
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_1807600A0,
            v14);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v16[1].Reserved.Reserved1,
            v17,
            a3);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1123LL;
      goto LABEL_15;
    }
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_1807600A8,
            v18);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned __int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v19[1].Reserved.Reserved1,
            v20,
            a4);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1124LL;
      goto LABEL_15;
    }
    v22 = v27;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_1807600D8,
            v21);
    v13 = CSingleViewShellExperience::Reactivate(
            (CStartExperienceManager *)((char *)this + 280),
            (HSTRING)v23[1].Reserved.Reserved1,
            v22,
            v24);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 1125LL;
      goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  }
  return 0LL;
}
