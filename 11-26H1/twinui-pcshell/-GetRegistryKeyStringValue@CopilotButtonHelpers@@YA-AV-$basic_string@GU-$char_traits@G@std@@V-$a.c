/*
 * XREFs of ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x18062575C
 * Callers:
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180623DFC (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x1801FDAD8 (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CopilotButtonHelpers::GetRegistryKeyStringValue(_QWORD *a1, __int64 a2, const unsigned __int16 *a3)
{
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int16 v8[264]; // [rsp+60h] [rbp-228h] BYREF

  std::wstring::wstring((__int64)a1, (__int64)&pvData);
  if ( !SHRegGetStringEx(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\Shell\\BrandedKey", a3, 2u, v8, 0x104u) )
  {
    v5 = (_QWORD *)std::wstring::wstring((__int64)v7, (__int64)v8);
    std::wstring::operator=(a1, v5);
    std::wstring::_Tidy_deallocate(v7);
  }
  return a1;
}
