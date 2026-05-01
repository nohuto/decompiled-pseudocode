/*
 * XREFs of ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802B6584
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x180097F14 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180190394 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KBViewInfo::GetViewTypesString(__int64 a1, _QWORD *a2)
{
  __int64 **v3; // rdi
  __int64 *i; // rbx
  _QWORD *v5; // rax
  void *v7[4]; // [rsp+30h] [rbp-38h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  v3 = *(__int64 ***)(a1 + 48);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( a2[2] )
      std::wstring::append(a2, L",", 1uLL);
    v5 = std::to_wstring(v7, *((_DWORD *)i + 4));
    std::wstring::append(a2, v5);
    std::wstring::_Tidy_deallocate(v7);
  }
  return a2;
}
