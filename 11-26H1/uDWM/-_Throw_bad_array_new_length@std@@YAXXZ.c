/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C
 * Callers:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000CE30 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@_KG@Z@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??append@01@QEAAAEAV01@0G@Z@_KG@Z @ 0x18000CF40 (--$_Reallocate_grow_by@V_lambda_1_@-1--append@-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x18005AB64 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x180074574 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180087240 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18008C7C8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18009A470 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn std::_Throw_bad_array_new_length(void)
{
  void **v0; // rdx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = "bad array new length";
  v0 = &stdext::bad_alloc::`vftable';
  v1[0] = &stdext::bad_alloc::`vftable';
  if ( std::_Raise_handler )
  {
    std::_Raise_handler((const struct stdext::exception *)v1);
    v0 = (void **)v1[0];
  }
  ((void (__fastcall *)(_QWORD *))v0[2])(v1);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
