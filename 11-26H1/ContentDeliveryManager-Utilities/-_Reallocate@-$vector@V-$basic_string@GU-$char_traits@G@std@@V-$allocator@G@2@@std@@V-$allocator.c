/*
 * XREFs of ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005C410
 * Callers:
 *     ?_Reserve@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005C4D4 (-_Reserve@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800499FC (--$_Uninit_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V-$alloc.c)
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x18005A6F0 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 */

char *__fastcall std::vector<std::wstring>::_Reallocate(__int64 *a1, unsigned __int64 a2)
{
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  char *result; // rax
  void *v8; // [rsp+48h] [rbp+10h]

  v3 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL || (v4 = 32 * a2, v3 = (char *)operator new(32 * a2), (v8 = v3) == 0LL) )
      std::_Xbad_alloc();
  }
  else
  {
    v4 = 0LL;
  }
  try
  {
    std::_Uninit_move<std::wstring *,std::wstring *,std::allocator<std::wstring>,std::wstring>(*a1, a1[1], (__int64)v3);
  }
  catch ( ... )
  {
    operator delete(v8);
    throw;
  }
  v6 = a1[1] - *a1;
  if ( *a1 )
  {
    std::vector<std::wstring>::_Destroy(v5, *a1, a1[1]);
    operator delete((void *)*a1);
  }
  result = &v3[v4];
  a1[2] = (__int64)&v3[v4];
  a1[1] = (__int64)&v3[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  *a1 = (__int64)v3;
  return result;
}
