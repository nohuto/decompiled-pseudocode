/*
 * XREFs of ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F4B14
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_::operator() @ 0x18046B4E0 (wistd--__function--__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800F53C4 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // r12
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // r12
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // r13
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  KeyboardHosting::TabTipAdapter *v21; // r14
  HRESULT v22; // eax
  int v23; // edx
  unsigned int v24; // r8d
  HSTRING v25; // rsi
  HRESULT v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  int v29; // eax
  HRESULT v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  HSTRING v33; // r12
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  int v37; // eax
  KeyboardHosting::TabTipAdapter *v38; // r12
  HRESULT v39; // eax
  int v40; // edx
  unsigned int v41; // r8d
  HSTRING v42; // r13
  HRESULT v43; // eax
  int v44; // edx
  unsigned int v45; // r8d
  int v46; // eax
  KeyboardHosting::TabTipAdapter *v47; // r14
  HRESULT v48; // eax
  int v49; // edx
  unsigned int v50; // r8d
  HSTRING v51; // rsi
  HRESULT v52; // eax
  int v53; // edx
  unsigned int v54; // r8d
  int v55; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v58; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v59; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardNarrowModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 2 )
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"0", 1u, &hstringHeader, &string);
    if ( v4 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    v7 = string;
    v59 = 0LL;
    v8 = WindowsCreateStringReference(L"KeyboardModeEnabled_narrow", 0x1Au, &v58, &v59);
    if ( v8 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v59, v7);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x898,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    v13 = WindowsCreateStringReference(L"0", 1u, &v58, &v59);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    v16 = v59;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"KeyboardModeEnabled_narrow12key", 0x1Fu, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, string, v16);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x899,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    v22 = WindowsCreateStringReference(L"0", 1u, &v58, &v59);
    if ( v22 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
    v25 = v59;
    string = 0LL;
    v26 = WindowsCreateStringReference(L"KeyboardModeEnabled_stroke", 0x1Au, &hstringHeader, &string);
    if ( v26 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26, v27, v28);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, string, v25);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
  }
  else
  {
    v59 = 0LL;
    v30 = WindowsCreateStringReference(L"1", 1u, &v58, &v59);
    if ( v30 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30, v31, v32);
    v33 = v59;
    string = 0LL;
    v34 = WindowsCreateStringReference(L"KeyboardModeEnabled_narrow", 0x1Au, &hstringHeader, &string);
    if ( v34 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
    v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, string, v33);
    if ( v37 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v37);
    v38 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    v39 = WindowsCreateStringReference(L"1", 1u, &v58, &v59);
    if ( v39 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39, v40, v41);
    v42 = v59;
    string = 0LL;
    v43 = WindowsCreateStringReference(L"KeyboardModeEnabled_narrow12key", 0x1Fu, &hstringHeader, &string);
    if ( v43 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43, v44, v45);
    v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v38, string, v42);
    if ( v46 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v46);
    v47 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    v48 = WindowsCreateStringReference(L"1", 1u, &v58, &v59);
    if ( v48 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48, v49, v50);
    v51 = v59;
    string = 0LL;
    v52 = WindowsCreateStringReference(L"KeyboardModeEnabled_stroke", 0x1Au, &hstringHeader, &string);
    if ( v52 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v52, v53, v54);
    v55 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, string, v51);
    if ( v55 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v55);
  }
}
