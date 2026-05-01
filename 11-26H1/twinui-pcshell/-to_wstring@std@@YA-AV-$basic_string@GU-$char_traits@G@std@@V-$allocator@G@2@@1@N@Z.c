/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x180475DF8
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18016E310 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024A938 (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801DBBF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     swprintf_s @ 0x1802CA064 (swprintf_s.c)
 *     _scwprintf @ 0x1802CA0C8 (_scwprintf.c)
 */

wchar_t *__fastcall std::to_wstring(wchar_t *a1, double a2)
{
  size_t v3; // rdi
  wchar_t *v4; // rcx

  v3 = scwprintf(L"%f", a2);
  std::wstring::wstring((__int64)a1, v3, 0);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v4 = *(wchar_t **)a1;
  swprintf_s(v4, v3 + 1, L"%f", a2);
  return a1;
}
