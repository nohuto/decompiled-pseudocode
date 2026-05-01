/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x1802C3DCC
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$6 @ 0x1806B0448 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$1 @ 0x1806B0490 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_--_1_--dtor$.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$4 @ 0x1806B04B4 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1806B04B4.c)
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x1806BA565 (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$15 @ 0x1806BA6B4 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$15.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x1806DCE0F (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE0F.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1806DCE25 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE25.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1806DCE3B (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE3B.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1806DCE51 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE51.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1806DCE67 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE67.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1806DCE7D (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE7D.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$7 @ 0x1806DCE93 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCE93.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$8 @ 0x1806DCEA9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCEA9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$9 @ 0x1806DCEBF (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1806DCEBF.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this, const struct std::nothrow_t *a2)
{
  _bstr_t::_Free(this, a2);
}
