/*
 * XREFs of ?StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WZZ @ 0x1800B58B0
 * Callers:
 *     ?CreateCurrentTriggerState@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18007D378 (-CreateCurrentTriggerState@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$c.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreativeFramework::CommonHelper::StringUtils::StringFormat(__int64 a1, const wchar_t *a2, ...)
{
  unsigned __int64 v3; // rdi
  wchar_t *v5; // [rsp+28h] [rbp-30h]
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  v3 = _vscwprintf(a2, va) + 1;
  v5 = (wchar_t *)operator new[](saturated_mul(v3, 2uLL));
  vswprintf_s(v5, v3, a2, va);
  std::wstring::wstring(a1);
  operator delete[](v5);
  return a1;
}
