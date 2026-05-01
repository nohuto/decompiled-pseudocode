/*
 * XREFs of ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018FE24
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180097824 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180098D24 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x18018FCC0 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180190394 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEBGAEA_N@Z @ 0x1802C6BE8 (--$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEB.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        unsigned __int16 *a3,
        char a4)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  void *v10; // rax
  int v11; // edx
  unsigned int v12; // r8d
  KeyboardHosting::TabTipAdapter *v13; // r15
  const WCHAR *v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  UINT32 v17; // edx
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  HSTRING v21; // rsi
  const WCHAR *v22; // rdi
  unsigned int v23; // eax
  UINT32 v24; // edx
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax
  _BYTE v29[8]; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int16 *v31; // [rsp+30h] [rbp-49h] BYREF
  PCWSTR sourceString[4]; // [rsp+38h] [rbp-41h] BYREF
  HSTRING_HEADER v33; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v34; // [rsp+70h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  HSTRING string; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v30 = a2;
  v31 = a3;
  v29[0] = a4;
  TouchKeyboardExperienceTelemetryLogger::UpdateRunningAnimation<unsigned int &,unsigned short const * &,bool &>(
    &v30,
    &v31,
    v29);
  std::wstring::wstring((char **)sourceString, L"ShellRunningAnimation_");
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  std::wstring::append(sourceString, a3, v9);
  std::wstring::append(sourceString, L"_", 1uLL);
  v10 = (void *)std::to_wstring(&v33, a2);
  std::wstring::append(sourceString, v10);
  std::wstring::_Tidy_deallocate(&v33.Reserved.Reserved1);
  v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  string = 0LL;
  v14 = L"1";
  if ( !a4 )
    v14 = L"0";
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  if ( v15 > 0xFFFFFFFF )
  {
LABEL_25:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v11, v12);
    JUMPOUT(0x18019000BLL);
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v15, v11, v12);
  v17 = v16 - 1;
  if ( (unsigned int)v15 < v16 )
    v17 = v15;
  v18 = WindowsCreateStringReference(v14, v17, &hstringHeader, &string);
  if ( v18 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
  v21 = string;
  v22 = (const WCHAR *)sourceString;
  if ( sourceString[3] > (PCWSTR)7 )
    v22 = sourceString[0];
  v34 = 0LL;
  do
    ++v8;
  while ( v22[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v19, v20);
    goto LABEL_25;
  }
  v23 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8, v19, v20);
  v24 = v23 - 1;
  if ( (unsigned int)v8 < v23 )
    v24 = v8;
  v25 = WindowsCreateStringReference(v22, v24, &v33, &v34);
  if ( v25 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, v34, v21);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16D8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  std::wstring::_Tidy_deallocate((void **)sourceString);
}
