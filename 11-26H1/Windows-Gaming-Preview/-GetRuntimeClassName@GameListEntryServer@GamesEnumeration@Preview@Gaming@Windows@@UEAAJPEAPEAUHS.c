/*
 * XREFs of ?GetRuntimeClassName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000DF70
 * Callers:
 *     ?GetRuntimeClassName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18000DFA0 (-GetRuntimeClassName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAPEA.c)
 *     ?GetRuntimeClassName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18000DFB0 (-GetRuntimeClassName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAPEA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry", 0x35u, a2);
}
