/*
 * XREFs of ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18024A234
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::append(a2, (__int64)L"MultiViewMode");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"Desktop");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"BlankDefaultViewEnabled");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"StandardViewsEnabled");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"ToolBarEnabled");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"ModernUX");
  std::wstring::append(a2, (__int64)L" ");
  std::wstring::append(a2, (__int64)L"SuggestionUIEnabled");
  std::wstring::append(a2, (__int64)L" ");
  return a2;
}
