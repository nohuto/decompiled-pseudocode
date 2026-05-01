/*
 * XREFs of ??1?$MakeAllocator@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000D200
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___&_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager___Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler____::_1_::dtor$0 @ 0x180043935 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameList.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded_::_1_::dtor$1 @ 0x180043959 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileAdded_--_1_--dtor.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager___Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler____::_1_::dtor$0 @ 0x180043D19 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180043D19.c)
 *     __lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()_::_1_::dtor$2 @ 0x180043F32 (__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180043FF7 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$1 @ 0x18004402D (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameConfigsToGameLis.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer__GUID_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__const_&__::_1_::dtor$0 @ 0x1800440CF (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameMode.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_short_const___&__::_1_::dtor$0 @ 0x1800443DC (_Microsoft--WRL--Details--MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_sho.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
