/*
 * XREFs of ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180013E1C
 * Callers:
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__AumId__ @ 0x180001460 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__AumId_.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DateInstalled__ @ 0x1800014A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__DateIn.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DesktopAppPath__ @ 0x1800014E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Deskto.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__FullTileId__ @ 0x180001520 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__FullTi.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameConfigIds__ @ 0x180001560 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameCo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameModeSystemDefaults__ @ 0x1800015A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameMo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x1800015E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Id__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__KglGameModeDefaults__ @ 0x180001620 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__KglGam.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__LastLaunched__ @ 0x180001660 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__LastLa.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__MFURank__ @ 0x1800016A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__MFURan.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PackageFamilyName__ @ 0x1800016E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Packag.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PhoneProductId__ @ 0x180001720 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__PhoneP.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__ProcessExeFullPaths__ @ 0x180001760 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Proces.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__TileId__ @ 0x1800017A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__TileId.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800163E0 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030DC8 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032628 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx
  UINT32 v5; // edx
  const WCHAR *v6; // rcx

  v2 = *a2;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    WindowsDeleteString(*string);
    v5 = v4;
    v6 = v2;
  }
  else
  {
    WindowsDeleteString(*string);
    v5 = 0;
    v6 = &String1;
  }
  *string = 0LL;
  return WindowsCreateString(v6, v5, string);
}
