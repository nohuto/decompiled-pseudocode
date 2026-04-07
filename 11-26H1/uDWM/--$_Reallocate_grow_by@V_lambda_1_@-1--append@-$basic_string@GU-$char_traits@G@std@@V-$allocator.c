/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@_KG@Z@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@0G@Z@_KG@Z @ 0x18000CF40
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x18000C5B4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005AC28 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??R_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV23@_KG@Z@QEBA@QEAGQEBG00G@Z @ 0x180072C14 (--R_lambda_1_@-1--append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV23.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall ____Reallocate_grow_by_V_lambda_1___1__append___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34__KG_Z__KG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__append_01_QEAAAEAV01_0G_Z__KG_Z(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  void *v14; // rbx

  v4 = *((_QWORD *)a1 + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Dwm_Xlength_error(a1);
  v7 = *((_QWORD *)a1 + 3);
  v8 = v4 + a2;
  v9 = std::wstring::_Calculate_growth(a1, v4 + a2);
  if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = std::_Allocate<16,std::_Default_allocate_traits>(2 * (v9 + 1));
  *((_QWORD *)a1 + 2) = v8;
  v12 = v10;
  *((_QWORD *)a1 + 3) = v9;
  if ( v7 > 7 )
  {
    v14 = *(void **)a1;
    `std::wstring::append'::`2'::_lambda_1_::operator()(v11, v10, *(_QWORD *)a1, v4, a4);
    std::_Deallocate<16>(v14, 2 * v7 + 2);
  }
  else
  {
    `std::wstring::append'::`2'::_lambda_1_::operator()(v11, v10, a1, v4, a4);
  }
  *(_QWORD *)a1 = v12;
  return a1;
}
