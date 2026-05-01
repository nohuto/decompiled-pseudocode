/*
 * XREFs of ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x1801E2FE8
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180144D00 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801CC134 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x1801E2E50 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x1802086D0 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x180033C3C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEBGAEA_N@Z @ 0x1802BD778 (--$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEB.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Integral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x180465CB8 (--$_Integral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        unsigned __int16 *a3,
        char a4)
{
  unsigned __int64 v8; // rax
  const void *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  void *v12; // rcx
  int v13; // edx
  unsigned int v14; // r8d
  KeyboardHosting::TabTipAdapter *v15; // r15
  const WCHAR *v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned int v19; // eax
  UINT32 v20; // edx
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  HSTRING v24; // rsi
  const WCHAR *v25; // rbx
  unsigned int v26; // eax
  UINT32 v27; // edx
  HRESULT v28; // eax
  int v29; // edx
  unsigned int v30; // r8d
  int v31; // eax
  _BYTE v32[8]; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v33[4]; // [rsp+28h] [rbp-61h] BYREF
  unsigned __int16 *v34; // [rsp+38h] [rbp-51h] BYREF
  PCWSTR sourceString[2]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v36; // [rsp+50h] [rbp-39h]
  HSTRING_HEADER v37; // [rsp+60h] [rbp-29h] BYREF
  HSTRING v38; // [rsp+78h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-9h] BYREF
  HSTRING string; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v33[0] = a2;
  v34 = a3;
  v32[0] = a4;
  TouchKeyboardExperienceTelemetryLogger::UpdateRunningAnimation<unsigned int &,unsigned short const * &,bool &>(
    v33,
    &v34,
    v32);
  *(_OWORD *)sourceString = 0LL;
  v36 = 0LL;
  v8 = std::_WChar_traits<wchar_t>::length((__int64)L"ShellRunningAnimation_");
  std::wstring::_Construct<1,unsigned short const *>((char **)sourceString, v9, v8);
  v10 = std::_WChar_traits<wchar_t>::length((__int64)a3);
  std::wstring::append(sourceString, a3, v10);
  v11 = std::_WChar_traits<wchar_t>::length((__int64)L"_");
  std::wstring::append(sourceString, v12, v11);
  std::_Integral_to_string<unsigned short,unsigned int>(&v37, a2);
  std::wstring::append(sourceString, &v37);
  std::wstring::_Tidy_deallocate(&v37);
  v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v16 = L"1";
  if ( !a4 )
    v16 = L"0";
  string = 0LL;
  v17 = -1LL;
  v18 = -1LL;
  do
    ++v18;
  while ( v16[v18] );
  if ( v18 > 0xFFFFFFFF )
  {
LABEL_23:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v13, v14);
    JUMPOUT(0x1801E31EDLL);
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v18, v13, v14);
  v20 = v19 - 1;
  if ( (unsigned int)v18 < v19 )
    v20 = v18;
  v21 = WindowsCreateStringReference(v16, v20, &hstringHeader, &string);
  if ( v21 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
  v24 = string;
  v25 = (const WCHAR *)sourceString;
  if ( *((_QWORD *)&v36 + 1) > 7uLL )
    v25 = sourceString[0];
  v38 = 0LL;
  do
    ++v17;
  while ( v25[v17] );
  if ( v17 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v22, v23);
    goto LABEL_23;
  }
  v26 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v17, v22, v23);
  v27 = v26 - 1;
  if ( (unsigned int)v17 < v26 )
    v27 = v17;
  v28 = WindowsCreateStringReference(v25, v27, &v37, &v38);
  if ( v28 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28, v29, v30);
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v38, v24);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1695,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  std::wstring::_Tidy_deallocate(sourceString);
}
