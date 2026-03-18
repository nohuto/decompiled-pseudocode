/*
 * XREFs of ??$_Allocate_for_capacity@$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPEADAEAV?$allocator@D@1@AEA_K@Z @ 0x1802370E4
 * Callers:
 *     ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180207AF4 (--$_Construct@$00PEBD@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXQEBD_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV34@QEBD_K@Z@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@QEBD0@Z@PEBD_K@Z @ 0x180237108 (--$_Reallocate_grow_by@V_lambda_1_@-1--append@-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180280CF4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

LPVOID __fastcall std::string::_Allocate_for_capacity<0>(__int64 a1, _QWORD *a2)
{
  LPVOID result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits>(++*a2, (__int64)a2);
  --*a2;
  return result;
}
