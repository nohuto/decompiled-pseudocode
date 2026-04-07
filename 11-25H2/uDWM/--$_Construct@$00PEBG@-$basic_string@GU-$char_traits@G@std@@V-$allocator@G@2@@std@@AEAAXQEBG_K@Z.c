/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180063CF0
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180063470 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180063F0C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095B8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbp
  char *v6; // rax
  size_t v7; // rbx
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbx

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  if ( a3 <= 7 )
  {
    *(_QWORD *)(a1 + 16) = a3;
    v10 = 2 * a3;
    memcpy_0((void *)a1, L"Segoe UI", 2 * a3);
    result = 0LL;
    *(_WORD *)(v10 + a1) = 0;
  }
  else
  {
    v5 = std::wstring::_Calculate_growth(a1, a3);
    if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v5 + 1));
    *(_QWORD *)(a1 + 16) = a3;
    v7 = 2 * a3;
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 24) = v5;
    v8 = v6;
    memcpy_0(v6, L"Segoe UI", v7);
    result = 0LL;
    *(_WORD *)&v8[v7] = 0;
  }
  return result;
}
