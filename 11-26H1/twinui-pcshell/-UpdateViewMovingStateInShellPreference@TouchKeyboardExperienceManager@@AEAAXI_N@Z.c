/*
 * XREFs of ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180473F64
 * Callers:
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x1804694FC (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x180033C3C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$UpdateViewMovingState@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z @ 0x180465B70 (--$UpdateViewMovingState@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z.c)
 *     ??$_Integral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x180465CB8 (--$_Integral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  unsigned int v6; // r8d
  KeyboardHosting::TabTipAdapter *v7; // rdi
  const WCHAR *v8; // rax
  HSTRING Reserved1; // rbx
  unsigned int v10; // r8d
  const WCHAR *v11; // rax
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  char v14[8]; // [rsp+20h] [rbp-39h] BYREF
  const WCHAR *v15; // [rsp+28h] [rbp-31h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-29h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER v18; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER v19; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v16 = a2;
  v14[0] = a3;
  TouchKeyboardExperienceTelemetryLogger::UpdateViewMovingState<unsigned int &,bool &>((int *)&v16, v14);
  std::wstring::wstring((__int64)Src, (__int64)L"ViewEnteredMoveSize_");
  std::_Integral_to_string<unsigned short,unsigned int>((__int64)&v18, a2);
  std::wstring::append(Src, &v18);
  std::wstring::_Tidy_deallocate(&v18);
  v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v8 = L"1";
  if ( !a3 )
    v8 = L"0";
  v15 = v8;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v15, v6)[1].Reserved.Reserved1;
  v11 = (const WCHAR *)Src;
  if ( Src[3] > 7uLL )
    v11 = (const WCHAR *)Src[0];
  v15 = v11;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v15, v10);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, (HSTRING)v12[1].Reserved.Reserved1, Reserved1);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x169E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  std::wstring::_Tidy_deallocate(Src);
}
