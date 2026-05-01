/*
 * XREFs of ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F50B8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_::operator() @ 0x18046B5E0 (wistd--__function--__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1800F4780 (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800F53C4 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F63DC (IsUserAssignedAccessSingleApp.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1802093AC (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  KeyboardHosting::TabTipAdapter *v4; // r14
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // rsi
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  KeyboardHosting::TabTipAdapter *v13; // rdi
  HRESULT v14; // eax
  int v15; // edx
  unsigned int v16; // r8d
  HSTRING v17; // rbx
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  int v21; // eax
  KeyboardHosting::TabTipAdapter *v22; // r14
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  HSTRING v26; // rsi
  HRESULT v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  KeyboardHosting::TabTipAdapter *v31; // rdi
  HRESULT v32; // eax
  int v33; // edx
  unsigned int v34; // r8d
  HSTRING v35; // rbx
  HRESULT v36; // eax
  int v37; // edx
  unsigned int v38; // r8d
  int v39; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v42; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v43; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardFullModeAvailability");
  if ( MdmPolicyValue == 2
    || !MdmPolicyValue
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3))
    && !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v3) )
  {
    v22 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v43 = 0LL;
    v23 = WindowsCreateStringReference(L"0", 1u, &v42, &v43);
    if ( v23 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
    v26 = v43;
    string = 0LL;
    v27 = WindowsCreateStringReference(L"KeyboardModeEnabled_full", 0x18u, &hstringHeader, &string);
    if ( v27 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27, v28, v29);
    v30 = KeyboardHosting::TabTipAdapter::SetShellPreference(v22, string, v26);
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x876,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v30);
    v31 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v43 = 0LL;
    v32 = WindowsCreateStringReference(L"0", 1u, &v42, &v43);
    if ( v32 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32, v33, v34);
    v35 = v43;
    string = 0LL;
    v36 = WindowsCreateStringReference(L"KeyboardModeEnabled_full106", 0x1Bu, &hstringHeader, &string);
    if ( v36 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v36, v37, v38);
    v39 = KeyboardHosting::TabTipAdapter::SetShellPreference(v31, string, v35);
    if ( v39 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x877,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v39);
  }
  else
  {
    v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    string = 0LL;
    v5 = WindowsCreateStringReference(L"1", 1u, &hstringHeader, &string);
    if ( v5 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    v8 = string;
    v43 = 0LL;
    v9 = WindowsCreateStringReference(L"KeyboardModeEnabled_full", 0x18u, &v42, &v43);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v43, v8);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x87B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v43 = 0LL;
    v14 = WindowsCreateStringReference(L"1", 1u, &v42, &v43);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14, v15, v16);
    v17 = v43;
    string = 0LL;
    v18 = WindowsCreateStringReference(L"KeyboardModeEnabled_full106", 0x1Bu, &hstringHeader, &string);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
    v21 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, string, v17);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x87C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
  }
}
