/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E8014
 * Callers:
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E8050 (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E81F4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803E83C0 (--1-$_Uninitialized_backout_al@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803E83D4 (--1-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E8780 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch$0 @ 0x1806C124D (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--_Emplace_reall.c)
 * Callees:
 *     ??1ParsedPenWorkspaceLayout@@QEAA@XZ @ 0x1803E8484 (--1ParsedPenWorkspaceLayout@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(
        ParsedPenWorkspaceLayout *this,
        ParsedPenWorkspaceLayout *a2)
{
  ParsedPenWorkspaceLayout *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout(v3);
      v3 = (ParsedPenWorkspaceLayout *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
}
