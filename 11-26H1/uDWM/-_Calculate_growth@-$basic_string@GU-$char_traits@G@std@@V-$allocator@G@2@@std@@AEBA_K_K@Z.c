/*
 * XREFs of ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005AC28
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@_KG@Z@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@0G@Z@_KG@Z @ 0x18000CF40 (--$_Reallocate_grow_by@V_lambda_1_@-1--append@-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x18005AB64 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::wstring::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx

  v2 = a2 | 7;
  v3 = 0x7FFFFFFFFFFFFFFELL;
  if ( v2 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = v4 >> 1;
    if ( v4 <= 0x7FFFFFFFFFFFFFFELL - (v4 >> 1) )
    {
      v3 = v5 + v4;
      if ( v2 >= v5 + v4 )
        return v2;
    }
  }
  return v3;
}
