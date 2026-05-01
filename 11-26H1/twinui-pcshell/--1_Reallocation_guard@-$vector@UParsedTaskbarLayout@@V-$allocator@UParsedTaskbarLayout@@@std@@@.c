/*
 * XREFs of ??1_Reallocation_guard@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031C5A0
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031BF44 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x1806E15BD (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_reallocate_Pars.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031BF08 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 */

void __fastcall std::vector<ParsedTaskbarLayout>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(
      *(ParsedTaskbarLayout **)(a1 + 24),
      *(ParsedTaskbarLayout **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(136LL * *(_QWORD *)(a1 + 16)));
  }
}
