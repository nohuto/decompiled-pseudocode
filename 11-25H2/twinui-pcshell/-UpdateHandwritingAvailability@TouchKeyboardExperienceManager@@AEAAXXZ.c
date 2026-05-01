/*
 * XREFs of ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800EABCC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_::operator() @ 0x18045F150 (wistd--__function--__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800EB6E0 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateHandwritingAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // esi
  KeyboardHosting::TabTipAdapter *v3; // r14
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rbx
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // rbx
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // rdi
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  HSTRING v24; // rsi
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax
  KeyboardHosting::TabTipAdapter *v29; // rdi
  HRESULT v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  HSTRING v33; // rbx
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  int v37; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v40; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v41; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardHandwritingModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"0", 1u, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
  v7 = string;
  v41 = 0LL;
  v8 = WindowsCreateStringReference(L"KeyboardModeEnabled_handwritinglinenarrow", 0x29u, &v40, &v41);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
  v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v41, v7);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x893,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v41 = 0LL;
  if ( MdmPolicyValue == 2 )
  {
    v13 = WindowsCreateStringReference(L"0", 1u, &v40, &v41);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    v16 = v41;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"KeyboardModeEnabled_handwritingline", 0x23u, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, string, v16);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x898,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
  }
  else
  {
    v21 = WindowsCreateStringReference(L"1", 1u, &v40, &v41);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    v24 = v41;
    string = 0LL;
    v25 = WindowsCreateStringReference(L"KeyboardModeEnabled_handwritingline", 0x23u, &hstringHeader, &string);
    if ( v25 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
    v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, string, v24);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v28);
    v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v41 = 0LL;
    v30 = WindowsCreateStringReference(L"handwritingline", 0xFu, &v40, &v41);
    if ( v30 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30, v31, v32);
    v33 = v41;
    string = 0LL;
    v34 = WindowsCreateStringReference(L"DefaultPenKeyboardMode", 0x16u, &hstringHeader, &string);
    if ( v34 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
    v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, string, v33);
    if ( v37 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v37);
  }
}
