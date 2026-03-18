/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180164490
 * Callers:
 *     ?SetApplicationId@CProcessAttribution@@QEAAXPEBG@Z @ 0x180163F78 (-SetApplicationId@CProcessAttribution@@QEAAXPEBG@Z.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x1801647B8 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rsi
  __int64 v5; // rbx

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
                     a1,
                     a3,
                     a3,
                     a2);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v4 = *(char **)a1;
  *((_QWORD *)a1 + 2) = a3;
  v5 = 2 * a3;
  memmove_0(v4, a2, 2 * a3);
  *(_WORD *)&v4[v5] = 0;
  return a1;
}
