/*
 * XREFs of ?_Xlen_string@std@@YAXXZ @ 0x14000EDC8
 * Callers:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000D6EC (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x14000D988 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     <none>
 */

void __noreturn std::_Xlen_string(void)
{
  std::_Xlength_error("string too long");
}
