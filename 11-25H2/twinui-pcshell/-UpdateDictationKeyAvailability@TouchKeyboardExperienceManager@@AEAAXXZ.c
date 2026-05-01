/*
 * XREFs of ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801FBA54
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180257EE4 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     wistd::__function::__func__lambda_b1438445f7414afdc94808c175150de5__void___cdecl(void)_::operator() @ 0x18045F3C0 (wistd--__function--__func__lambda_b1438445f7414afdc94808c175150de5__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298624 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchKeyboardExperienceManager::UpdateDictationKeyAvailability(TouchKeyboardExperienceManager *this)
{
  int v2; // edx
  unsigned int v3; // r8d
  KeyboardHosting::TabTipAdapter *v4; // rsi
  const WCHAR *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  UINT32 v8; // edx
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  HSTRING v12; // rbx
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  const char *v17; // r9
  int v18; // [rsp+20h] [rbp-78h] BYREF
  PCWSTR sourceString[4]; // [rsp+28h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-50h] BYREF
  HSTRING string; // [rsp+60h] [rbp-38h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp-30h] BYREF
  HSTRING v23; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18 = 0;
  PolicyManager_GetPolicyInt(L"TextInput", L"TouchKeyboardDictationButtonAvailability", &v18);
  try
  {
    std::to_wstring();
    v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v5 = (const WCHAR *)sourceString;
    if ( sourceString[3] > (PCWSTR)7 )
      v5 = sourceString[0];
    string = 0LL;
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v2, v3);
    }
    else
    {
      v7 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v6, v2, v3);
      v8 = v7 - 1;
      if ( (unsigned int)v6 < v7 )
        v8 = v6;
      v9 = WindowsCreateStringReference(v5, v8, &hstringHeader, &string);
      if ( v9 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
      v12 = string;
      v23 = 0LL;
      v13 = WindowsCreateStringReference(L"TouchKeyboardDictationButtonAvailability", 0x28u, &v22, &v23);
      if ( v13 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
      v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v23, v12);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F8,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
      std::wstring::_Tidy_deallocate((void **)sourceString);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8FA,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v17);
  }
}
