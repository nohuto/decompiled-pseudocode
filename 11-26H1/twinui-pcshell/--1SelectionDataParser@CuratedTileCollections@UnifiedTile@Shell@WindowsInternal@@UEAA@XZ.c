/*
 * XREFs of ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x18067773C
 * Callers:
 *     ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180677820 (--_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::~SelectionDataParser(
        volatile signed __int32 **this,
        unsigned int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx

  _bstr_t::_Free(this + 10, a2);
  _bstr_t::_Free(this + 9, v3);
  _bstr_t::_Free(this + 8, v4);
  _bstr_t::_Free(this + 7, v5);
  _bstr_t::_Free(this + 6, v6);
  _bstr_t::_Free(this + 5, v7);
  _bstr_t::_Free(this + 4, v8);
  _bstr_t::_Free(this + 3, v9);
  _bstr_t::_Free(this + 2, v10);
  *((_DWORD *)this + 3) = -1073741823;
}
