/*
 * XREFs of ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E6D8
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x18033E388 (--$_Pop_heap_hole_by_index@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked<std::wstring *,std::less<void>>(char *a1, __int64 a2)
{
  signed __int64 result; // rax
  char *v4; // rbp
  __int64 v5; // rsi
  wchar_t v6[16]; // [rsp+30h] [rbp-48h] BYREF

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( result >= 64 )
  {
    v4 = (char *)(a2 - 32);
    v5 = 32LL - (_QWORD)a1;
    do
    {
      std::wstring::wstring((__int64)v6, (__int64)v4);
      std::wstring::operator=(v4, a1);
      std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>((__int64)a1, 0LL, (v4 - a1) >> 5, v6);
      std::wstring::_Tidy_deallocate(v6);
      v4 -= 32;
      result = (unsigned __int64)&v4[v5] & 0xFFFFFFFFFFFFFFE0uLL;
    }
    while ( result >= 64 );
  }
  return result;
}
