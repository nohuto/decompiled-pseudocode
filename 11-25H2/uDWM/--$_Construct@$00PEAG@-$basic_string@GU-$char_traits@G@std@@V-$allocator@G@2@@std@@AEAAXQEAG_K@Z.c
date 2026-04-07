/*
 * XREFs of ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800D45B0
 * Callers:
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800D4680 (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180063F0C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095B8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short *>(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  const struct std::nothrow_t *v8; // rdx
  unsigned __int64 v9; // r14
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  if ( a3 > 7 )
  {
    v9 = std::wstring::_Calculate_growth(a1, a3);
    if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v9 + 1), v8);
    *(_QWORD *)(a1 + 16) = a3;
    v11 = 2 * a3;
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 24) = v9;
    v12 = v10;
    memcpy_0(v10, a2, v11);
    result = 0LL;
    *(_WORD *)&v12[v11] = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a3;
    v6 = 2 * a3;
    memcpy_0((void *)a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)(v6 + a1) = 0;
  }
  return result;
}
