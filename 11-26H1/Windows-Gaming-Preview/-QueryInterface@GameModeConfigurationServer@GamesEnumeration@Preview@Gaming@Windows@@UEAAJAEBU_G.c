/*
 * XREFs of ?QueryInterface@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D9D0
 * Callers:
 *     ?QueryInterface@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D9E0 (-QueryInterface@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_.c)
 *     ?QueryInterface@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D9F0 (-QueryInterface@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
