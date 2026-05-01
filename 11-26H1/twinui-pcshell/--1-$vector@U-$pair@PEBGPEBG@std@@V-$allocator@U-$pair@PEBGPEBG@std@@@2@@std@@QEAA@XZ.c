/*
 * XREFs of ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x1801579CC
 * Callers:
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$0 @ 0x1806D6A93 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema_::_1_::dtor$0 @ 0x1806D6AC9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--LoadSchema_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1806DDCA0 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x1806E9165 (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::~vector<std::pair<unsigned short const *,unsigned short const *>>(
        __int64 a1)
{
  return std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(a1);
}
