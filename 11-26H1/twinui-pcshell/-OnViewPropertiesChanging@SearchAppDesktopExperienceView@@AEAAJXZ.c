/*
 * XREFs of ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB0BC
 * Callers:
 *     ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803C82F0 (-ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803CA9A0 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x1802DBE64 (--$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370B68 (--$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA-AV0.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180371A38 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375BE8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1803C6974 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803C9DC4 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803CE1A0 (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchAppDesktopExperienceView::OnViewPropertiesChanging(SearchAppDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  unsigned __int8 v14; // dl
  bool v15; // di
  int v16; // eax
  char IsViewVisible; // al
  int v18; // eax
  int v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v25; // [rsp+68h] [rbp-A0h]
  _QWORD v26[42]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v26);
  v22 = 0LL;
  v2 = *((_QWORD *)this + 18);
  v3 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v4 = v3(v2, &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
      v22);
    v6 = *((_DWORD *)this + 30);
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v20 = 0;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                v25,
                v7,
                &v20) >= 0 )
      v8 = v20;
    else
      v8 = 0;
    *((_DWORD *)this + 30) = v8;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v20 = 0;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                v25,
                v9,
                &v20) >= 0 )
      v10 = v20;
    else
      v10 = 0;
    *((_DWORD *)this + 29) = v10;
    *(_OWORD *)v23 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
      v25,
      v11,
      v23);
    v12 = (int)*(float *)v23;
    *((_DWORD *)this + 31) = (int)*(float *)v23;
    v13 = (int)*((float *)v23 + 1);
    *((_DWORD *)this + 32) = (int)*((float *)v23 + 1);
    *((_DWORD *)this + 33) = (int)(float)((float)v12 + *(float *)&v23[1]);
    *((_DWORD *)this + 34) = (int)(float)((float)v13 + *((float *)&v23[1] + 1));
    v14 = *((_DWORD *)this + 30) != 3;
    v15 = 0;
    if ( v6 == 9 )
    {
      if ( *((_DWORD *)this + 30) != 9 )
      {
        v15 = 1;
        *((_BYTE *)this + 203) = 0;
      }
    }
    else if ( *((_DWORD *)this + 30) == 9 )
    {
      *((_BYTE *)this + 203) = 1;
    }
    SearchAppDesktopExperienceView::UpdateSuggestionsShowing(this, v14);
    v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 18) + 48LL))(
            *((_QWORD *)this + 18),
            (char *)this + 172);
    v5 = v16;
    if ( v16 >= 0 )
    {
      IsViewVisible = SearchAppDesktopExperienceView::IsViewVisible(this);
      v18 = SearchAppDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v15);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AB,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v18);
      wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x389,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v26);
  return v5;
}
