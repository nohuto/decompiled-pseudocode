/*
 * XREFs of _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch$0 @ 0x1806BA5DA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031F7B0 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 */

void __fastcall __noreturn std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(
    *(ParsedTaskbarLayout **)(a2 + 112),
    *(ParsedTaskbarLayout **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(136LL * *(_QWORD *)(a2 + 120)));
  throw;
}
