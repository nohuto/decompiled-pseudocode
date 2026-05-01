/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D55CC
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803D1E10 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803D4D90 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
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
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803D2520 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1803D3994 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803D3B98 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D68E4 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803D7A54 (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  __int64 v7; // r8
  bool v8; // sf
  int v9; // eax
  int v10; // r15d
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  CortanaFlightingHelpers *v15; // rcx
  unsigned __int8 v16; // bl
  bool v17; // di
  int v18; // eax
  int v19; // eax
  char IsViewVisible; // al
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v29; // [rsp+60h] [rbp-A0h]
  _QWORD v30[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v30);
  v26 = 0LL;
  v2 = *((_QWORD *)this + 21);
  v3 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v4 = v3(v2, &v26);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
      v26);
    v6 = *((_DWORD *)this + 36);
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v24 = 0;
    v8 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                v29,
                v7,
                &v24) < 0;
    v9 = 0;
    if ( !v8 )
      v9 = v24;
    *((_DWORD *)this + 36) = v9;
    v10 = *((_DWORD *)this + 35);
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v24 = 0;
    v8 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                v29,
                v11,
                &v24) < 0;
    v12 = 0;
    if ( !v8 )
      v12 = v24;
    *((_DWORD *)this + 35) = v12;
    v27 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
      v29,
      v13,
      &v27);
    v14 = (int)*(float *)&v27;
    *((_DWORD *)this + 37) = (int)*(float *)&v27;
    v15 = (CortanaFlightingHelpers *)(unsigned int)(int)*((float *)&v27 + 1);
    *((_DWORD *)this + 38) = (_DWORD)v15;
    *((_DWORD *)this + 39) = (int)(float)((float)v14 + *((float *)&v27 + 2));
    *((_DWORD *)this + 40) = (int)(float)((float)(int)v15 + *((float *)&v27 + 3));
    v16 = *((_DWORD *)this + 36) != 3;
    if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v15) && *((_DWORD *)this + 35) == 6 )
      v16 = 0;
    v17 = 0;
    v18 = *((_DWORD *)this + 36);
    if ( v6 == 9 )
    {
      if ( v18 != 9 )
      {
        v17 = 1;
        *((_BYTE *)this + 249) = 0;
      }
    }
    else if ( v18 == 9 )
    {
      *((_BYTE *)this + 249) = 1;
    }
    CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, v16);
    v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 48LL))(
            *((_QWORD *)this + 21),
            (char *)this + 212);
    v5 = v19;
    if ( v19 >= 0 )
    {
      IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
      v21 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v17);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4A8,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v21);
      if ( v10 == 3 )
      {
        CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
        if ( *((_DWORD *)this + 35) == 4 )
        {
          v22 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4B6,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
              (const char *)(unsigned int)v22);
        }
      }
      wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v30);
  return v5;
}
