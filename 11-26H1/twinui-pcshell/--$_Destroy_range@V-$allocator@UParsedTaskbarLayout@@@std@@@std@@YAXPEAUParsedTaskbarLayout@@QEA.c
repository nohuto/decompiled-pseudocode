/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031BF08
 * Callers:
 *     ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031C0EC (--$_Uninitialized_move@PEAUParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Y.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031C424 (--1-$_Uninitialized_backout_al@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031C438 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031C5A0 (--1_Reallocation_guard@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031D590 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?_Change_array@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAXQEAUParsedTaskbarLayout@@_K1@Z @ 0x18031E0E0 (-_Change_array@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@AEA.c)
 * Callees:
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18031C4A0 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
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
