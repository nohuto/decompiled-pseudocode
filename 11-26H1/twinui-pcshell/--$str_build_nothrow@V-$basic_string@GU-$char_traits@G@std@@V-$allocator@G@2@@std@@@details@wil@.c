/*
 * XREFs of ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803D93E0
 * Callers:
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803D9538 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803D95E0 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x180032D0C (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1801CB0EC (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?release@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1801E810C (-release@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@w.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details::str_build_nothrow<std::wstring>(_QWORD *a1, const unsigned __int16 **a2)
{
  const unsigned __int16 **v2; // r14
  const unsigned __int16 **v4; // rdi
  unsigned __int64 v5; // rsi
  const unsigned __int16 **v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // rsi
  _QWORD *v13; // rax
  unsigned __int16 *v15; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 *v16[4]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = a2 + 4;
  v4 = a2;
  v5 = 0LL;
  v6 = a2;
  do
  {
    if ( *v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( (*v6)[v7] );
    }
    else
    {
      v7 = 0LL;
    }
    v5 += v7;
    ++v6;
  }
  while ( v6 != v2 );
  std::wstring::wstring((__int64)v16);
  v8 = wil::details::string_maker<std::wstring>::make(v16, 0LL, v5);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (unsigned __int16 *)v16;
    if ( v16[3] > (unsigned __int16 *)7 )
      v11 = v16[0];
    v15 = v11;
    v12 = &v11[v5];
    while ( v4 != v2 )
    {
      if ( *v4 )
      {
        v8 = StringCchCopyExW(v11, v12 + 1 - v11, *v4, &v15, 0LL, 0x100u);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 1872LL;
          goto LABEL_19;
        }
        v11 = v15;
      }
      ++v4;
    }
    v13 = (_QWORD *)wil::details::string_maker<std::wstring>::release((__int64)v16, (__int64)v17);
    std::wstring::operator=(a1, v13);
    std::wstring::_Tidy_deallocate(v17);
    v9 = 0;
  }
  else
  {
    v10 = 1864LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v8);
  }
  std::wstring::_Tidy_deallocate(v16);
  return v9;
}
