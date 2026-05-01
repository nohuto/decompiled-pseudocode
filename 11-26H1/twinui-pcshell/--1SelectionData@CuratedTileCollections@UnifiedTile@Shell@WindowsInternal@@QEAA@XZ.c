/*
 * XREFs of ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18031C4C8
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031BB24 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18031C4A0 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x18031C538 (--1TaskbarLayoutParser@@UEAA@XZ.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18031C9C0 (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803F1798 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1803F1D6C (--1PWSLayoutParser@@UEAA@XZ.c)
 *     ??1ParsedPenWorkspaceLayout@@QEAA@XZ @ 0x1803F1DBC (--1ParsedPenWorkspaceLayout@@QEAA@XZ.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$1 @ 0x1806E156C (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_1806E156C.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x1806E157E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_1806E157E.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18012BE08 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this)
{
  LPVOID *v1; // rbp
  LPVOID *i; // rbx

  v1 = (LPVOID *)*((_QWORD *)this + 3);
  for ( i = (LPVOID *)*((_QWORD *)this + 2); i != v1; ++i )
    CoTaskMemFree(*i);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)this + 8);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)this + 5);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64 *)this + 2);
}
