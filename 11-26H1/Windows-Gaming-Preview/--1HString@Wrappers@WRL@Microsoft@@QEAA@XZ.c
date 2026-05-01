/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000D40C
 * Callers:
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$14 @ 0x1800439B3 (_JsonDocumentFromGameConfigValues_--_1_--dtor$14.c)
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x1800439C5 (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$4 @ 0x1800439D7 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$1 @ 0x1800439E9 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x180043A82 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     __lambda_e30f9dfe56fd89cbeec2250555549c57_::operator()_::_1_::dtor$7 @ 0x180043AA6 (__lambda_e30f9dfe56fd89cbeec2250555549c57_--operator()_--_1_--dtor$7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x180043CD1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043CD1.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$4 @ 0x180043CE3 (_SerializeRelatedProcessArray_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180044063 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$5 @ 0x180044166 (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$5.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$6 @ 0x18004418A (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x1800441D2 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x1800441F6 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800441F6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180044250 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal_::_1_::dtor$0 @ 0x180044286 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_SetTitleIdInternal_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
