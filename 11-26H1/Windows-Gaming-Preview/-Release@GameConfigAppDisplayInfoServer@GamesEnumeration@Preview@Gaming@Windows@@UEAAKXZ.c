/*
 * XREFs of ?Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18002E1D0
 * Callers:
 *     ?Release@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18002E1E0 (-Release@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18002E1F0 (-Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(this);
}
