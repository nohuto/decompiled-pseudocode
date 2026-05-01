/*
 * XREFs of ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031F9BC
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031F7EC (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031F7B0 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedTaskbarLayout@@@1@QEAUParsedTaskbarLayout@@$$QEAU3@@Z @ 0x18031FA30 (--$construct@UParsedTaskbarLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedTaskbarLa.c)
 */

// Hidden C++ exception states: #wind=1
ParsedTaskbarLayout *__fastcall std::_Uninitialized_move<ParsedTaskbarLayout *>(
        __int64 a1,
        __int64 a2,
        ParsedTaskbarLayout *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 136LL )
  {
    std::_Default_allocator_traits<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
      a1,
      a3,
      i);
    a3 = (ParsedTaskbarLayout *)((char *)a3 + 136);
  }
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(a3, a3);
  return a3;
}
