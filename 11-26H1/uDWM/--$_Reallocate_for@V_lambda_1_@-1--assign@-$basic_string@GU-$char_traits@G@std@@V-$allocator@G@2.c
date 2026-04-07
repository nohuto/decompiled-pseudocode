/*
 * XREFs of ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x18005AB64
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005AAFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005AC28 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall ____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  char *v9; // rax
  size_t v10; // rbx
  char *v11; // rsi

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = std::wstring::_Calculate_growth(a1, a2);
  if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v8 + 1));
  *(_QWORD *)(a1 + 16) = a2;
  v10 = 2 * a2;
  *(_QWORD *)(a1 + 24) = v8;
  v11 = v9;
  memcpy_0(v9, a4, v10);
  *(_WORD *)&v11[v10] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16>(*(void **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}
