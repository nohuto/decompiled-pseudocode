/*
 * XREFs of ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803CF764
 * Callers:
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803CF8E4 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803CF998 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800585DC (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1801D55C4 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details::str_build_nothrow<std::wstring>(__int64 a1, const unsigned __int16 **a2)
{
  const unsigned __int16 **v2; // r14
  const unsigned __int16 **v4; // rbx
  unsigned __int64 v5; // rsi
  const unsigned __int16 **v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // rsi
  __int128 v13; // xmm0
  __m128i v14; // xmm1
  unsigned __int16 *v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 *v17[2]; // [rsp+38h] [rbp-48h] BYREF
  __m128i si128; // [rsp+48h] [rbp-38h]
  _OWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
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
  *(_OWORD *)v17 = 0LL;
  LOWORD(v17[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = wil::details::string_maker<std::wstring>::make((__int128 *)v17, 0LL, v5);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (unsigned __int16 *)v17;
    if ( si128.m128i_i64[1] > 7uLL )
      v11 = v17[0];
    v16 = v11;
    v12 = &v11[v5];
    while ( v4 != v2 )
    {
      if ( *v4 )
      {
        v8 = StringCchCopyExW(v11, v12 + 1 - v11, *v4, &v16, 0LL, 0x100u);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 1851LL;
          goto LABEL_19;
        }
        v11 = v16;
      }
      ++v4;
    }
    v13 = *(_OWORD *)v17;
    v14 = si128;
    LOWORD(v17[0]) = 0;
    v19[0] = v13;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v19[1] = v14;
    std::wstring::operator=(a1, (__int64)v19);
    std::wstring::_Tidy_deallocate((void **)v19);
    v9 = 0;
  }
  else
  {
    v10 = 1843LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v8);
  }
  std::wstring::_Tidy_deallocate((void **)v17);
  return v9;
}
