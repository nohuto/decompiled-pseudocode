/*
 * XREFs of ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180467F94
 * Callers:
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180190394 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$UpdateViewMovingState@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z @ 0x180459958 (--$UpdateViewMovingState@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // r8d
  KeyboardHosting::TabTipAdapter *v8; // rdi
  const WCHAR *v9; // rax
  HSTRING Reserved1; // rbx
  unsigned int v11; // r8d
  const WCHAR *v12; // rax
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  char v15[8]; // [rsp+20h] [rbp-39h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-31h] BYREF
  void *Src[4]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING_HEADER v18; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER v19; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v16) = a2;
  v15[0] = a3;
  TouchKeyboardExperienceTelemetryLogger::UpdateViewMovingState<unsigned int &,bool &>((int *)&v16, v15);
  std::wstring::wstring((char **)Src, L"ViewEnteredMoveSize_");
  v6 = std::to_wstring(&v18, a2);
  std::wstring::append(Src, v6);
  std::wstring::_Tidy_deallocate(&v18.Reserved.Reserved1);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v9 = L"1";
  if ( !a3 )
    v9 = L"0";
  v16 = v9;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16, v7)[1].Reserved.Reserved1;
  v12 = (const WCHAR *)Src;
  if ( Src[3] > (void *)7 )
    v12 = (const WCHAR *)Src[0];
  v16 = v12;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v16, v11);
  v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, (HSTRING)v13[1].Reserved.Reserved1, Reserved1);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16E1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  std::wstring::_Tidy_deallocate(Src);
}
