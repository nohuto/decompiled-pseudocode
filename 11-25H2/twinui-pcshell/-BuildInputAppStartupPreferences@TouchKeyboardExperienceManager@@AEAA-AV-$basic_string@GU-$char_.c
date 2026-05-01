/*
 * XREFs of ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18025595C
 * Callers:
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(__int64 a1, _QWORD *a2)
{
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::append(a2, L"MultiViewMode", 0xDuLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, (void *)L"Desktop", 7uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"BlankDefaultViewEnabled", 0x17uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"StandardViewsEnabled", 0x14uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"ToolBarEnabled", 0xEuLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, (void *)L"ModernUX", 8uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"SuggestionUIEnabled", 0x13uLL);
  std::wstring::append(a2, L" ", 1uLL);
  return a2;
}
