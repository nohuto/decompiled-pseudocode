/*
 * XREFs of ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x1806005CC
 * Callers:
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x1805FEB1C (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18020A5F8 (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall CopilotButtonHelpers::GetRegistryKeyStringValue(char **a1, __int64 a2, const unsigned __int16 *a3)
{
  char **v5; // rax
  void *v7[4]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int16 v8[264]; // [rsp+60h] [rbp-228h] BYREF

  std::wstring::wstring(a1, &LocaleName);
  if ( !SHRegGetStringEx(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\Shell\\BrandedKey", a3, 2u, v8, 0x104u) )
  {
    v5 = std::wstring::wstring((char **)v7, v8);
    std::wstring::operator=((__int64)a1, (__int64)v5);
    std::wstring::_Tidy_deallocate(v7);
  }
  return a1;
}
