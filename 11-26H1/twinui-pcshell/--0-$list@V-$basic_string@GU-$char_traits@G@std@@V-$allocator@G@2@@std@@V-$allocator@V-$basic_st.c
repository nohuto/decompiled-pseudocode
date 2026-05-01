/*
 * XREFs of ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x1802BA0B0
 * Callers:
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x180585F64 (_lambda_88c52b909d46191f2a7b9cf853665f36_--_lambda_88c52b909d46191f2a7b9cf853665f36_.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1801D1440 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 */

_QWORD *__fastcall std::list<std::wstring>::list<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(a1);
  v4 = *a1;
  *a1 = *a2;
  *a2 = v4;
  v5 = a1[1];
  a1[1] = a2[1];
  result = a1;
  a2[1] = v5;
  return result;
}
