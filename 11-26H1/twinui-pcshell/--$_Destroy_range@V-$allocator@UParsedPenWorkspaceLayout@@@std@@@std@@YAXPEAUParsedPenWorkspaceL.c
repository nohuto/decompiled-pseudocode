/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803F196C
 * Callers:
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803F1B24 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803F1CF0 (--1-$_Uninitialized_backout_al@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803F1D04 (--1-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@.c)
 *     ??1_Reallocation_guard@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803F1DE4 (--1_Reallocation_guard@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayou.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F2120 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x1803F2B74 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 * Callees:
 *     ??1ParsedPenWorkspaceLayout@@QEAA@XZ @ 0x1803F1DBC (--1ParsedPenWorkspaceLayout@@QEAA@XZ.c)
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
