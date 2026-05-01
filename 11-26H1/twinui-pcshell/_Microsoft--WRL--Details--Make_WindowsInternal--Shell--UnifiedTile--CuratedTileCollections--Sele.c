/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor$0 @ 0x1806E1590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(*(__int64 **)(a2 + 80));
  }
}
