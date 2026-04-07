/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000CE30
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x18000C5B4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180068950 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbp
  char *v8; // rax
  size_t v9; // rbx
  char *v10; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth(a3);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v7 + 1));
    *(_QWORD *)(a1 + 16) = a3;
    v9 = 2 * a3;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 24) = v7;
    v10 = v8;
    memcpy_0(v8, L"Segoe UI", v9);
    result = 0LL;
    *(_WORD *)&v10[v9] = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a3;
    v5 = 2 * a3;
    *(_QWORD *)(a1 + 24) = 7LL;
    memcpy_0((void *)a1, L"Segoe UI", 2 * a3);
    result = 0LL;
    *(_WORD *)(v5 + a1) = 0;
  }
  return result;
}
