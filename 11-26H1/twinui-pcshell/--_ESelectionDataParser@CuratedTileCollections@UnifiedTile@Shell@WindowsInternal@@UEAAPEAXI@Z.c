/*
 * XREFs of ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180677820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x18067773C (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vector deleting destructor'(
        volatile signed __int32 **this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
