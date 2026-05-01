/*
 * XREFs of ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802AF5CC
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18014531C (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x180033C3C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Integral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x180465CB8 (--$_Integral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KBViewInfo::GetViewTypesString(__int64 a1, _QWORD *a2)
{
  int v4; // ebp
  __int64 ***v5; // rdi
  __int64 **i; // rbx
  _QWORD v8[4]; // [rsp+30h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)a2);
  v4 = 1;
  v5 = *(__int64 ****)(a1 + 48);
  for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
  {
    if ( a2[2] )
      std::wstring::append((__int64)a2, (__int64)L",");
    std::_Integral_to_string<unsigned short,unsigned int>(v8, *((unsigned int *)i + 4));
    v4 |= 2u;
    std::wstring::append(a2, v8);
    std::wstring::_Tidy_deallocate(v8);
  }
  return a2;
}
