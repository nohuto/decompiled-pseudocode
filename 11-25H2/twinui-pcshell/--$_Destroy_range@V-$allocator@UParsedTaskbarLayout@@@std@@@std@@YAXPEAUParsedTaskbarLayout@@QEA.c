/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031F7B0
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031F7EC (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031F9BC (--$_Uninitialized_move@PEAUParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Y.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031FC80 (--1-$_Uninitialized_backout_al@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031FC94 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180320DE0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch$0 @ 0x1806BA5DA (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_reallocate_Pars.c)
 * Callees:
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18031FCF4 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(
        ParsedTaskbarLayout *this,
        ParsedTaskbarLayout *a2)
{
  ParsedTaskbarLayout *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ParsedTaskbarLayout::~ParsedTaskbarLayout(v3);
      v3 = (ParsedTaskbarLayout *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
}
