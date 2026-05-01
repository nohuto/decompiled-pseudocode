/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180198A5C
 * Callers:
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1801989B0 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator() @ 0x18045E10C (_lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x180097F14 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x180098100 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18018EF38 (-Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1801B3830 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801F1160 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameTitleBar@@@WRL@Microsoft@@PEAUIApplicationFrameWrapper@@@Z @ 0x1801F7850 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplica.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802CB6FC (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager_SetBand@@@details@wil@@QEAA_NXZ @ 0x180468AB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager_Se.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rbx
  const WCHAR *StringRawBuffer; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rdx
  HWND v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  HRESULT v23; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-30h]
  const char *v25; // [rsp+28h] [rbp-28h]
  volatile signed __int32 *v26; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v27; // [rsp+38h] [rbp-18h] BYREF
  HWND hwnd[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int pvAttribute; // [rsp+88h] [rbp+38h] BYREF
  __int64 v31; // [rsp+90h] [rbp+40h] BYREF
  __int64 v32; // [rsp+98h] [rbp+48h] BYREF

  if ( !*((_BYTE *)a2 + 32) )
  {
    KBViewInfo::InitializeIds(a2);
    v4 = (winrt::hstring *)winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Default(&v26);
    v5 = winrt::hstring::c_str(v4);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
    LODWORD(v5) = CompareStringOrdinal(StringRawBuffer, -1, v5, -1, 1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
    if ( (_DWORD)v5 == 2 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(this, *((_DWORD *)a2 + 26));
    if ( !*((_BYTE *)a2 + 33) && *((_QWORD *)a2 + 14) )
    {
      if ( !KBViewInfo::IsAppDefaultView(a2) )
      {
        v8 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v7);
        if ( v8 && !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
        {
          v9 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x148D,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)0x80004005LL);
          return v9;
        }
        TouchKeyboardExperienceManager::CreateAppFrameWrapper(this, &v31);
        TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v11, &v27, v31);
        v12 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager_SetBand>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager_SetBand>::GetImpl'::`2'::impl) == 0;
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 48LL);
        if ( v12 )
        {
          v22 = v13(v31, 3LL);
          if ( v22 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x149B,
              (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v22,
              bIgnoreCase);
        }
        else
        {
          v14 = v13(v31, 3LL);
          *((_BYTE *)a2 + 35) = wil::details::in1diag3::Log_IfFailedMsg(
                                  retaddr,
                                  (void *)0x1497,
                                  (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexper"
                                                "iencemanager.cpp",
                                  (const char *)v14,
                                  (int)"SetWindowBand() failed",
                                  v25) >= 0;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 104LL))(v31, *(_QWORD *)a2);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x149D,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v15,
            bIgnoreCase);
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 520LL))(*(_QWORD *)a2, 1LL);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x14A0,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v16,
            bIgnoreCase);
        v17 = v27;
        if ( *((volatile signed __int32 **)a2 + 2) != v27 )
        {
          v26 = v27;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
          v26 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 2) = v17;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)a2 + 1, &v31);
        v32 = 0LL;
        v18 = v31;
        v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        v20 = v19(v18, &v32);
        v9 = v20;
        if ( v20 < 0 )
        {
          v21 = 5287LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
          return v9;
        }
        hwnd[0] = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v32 + 24LL))(v32, hwnd);
        v9 = v20;
        if ( v20 < 0 )
        {
          v21 = 5289LL;
          goto LABEL_23;
        }
        pvAttribute = 1;
        v23 = DwmSetWindowAttribute(hwnd[0], 0x404u, &pvAttribute, 4u);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x14AB,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
      }
      *((_BYTE *)a2 + 33) = 1;
    }
  }
  return 0LL;
}
