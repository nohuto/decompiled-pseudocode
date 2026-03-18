/*
 * XREFs of ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x1801647B8
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180164490 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x18016504C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18022FC5C (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall ____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r15
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rsi

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = *(_QWORD *)(a1 + 24);
  v9 = std::wstring::_Calculate_growth(a2, v7);
  if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * (v9 + 1), v8);
  *(_QWORD *)(a1 + 16) = a2;
  v11 = 2 * a2;
  *(_QWORD *)(a1 + 24) = v9;
  v12 = v10;
  memcpy_0(v10, a4, v11);
  *(_WORD *)&v12[v11] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16>(*(void **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v12;
  return a1;
}
