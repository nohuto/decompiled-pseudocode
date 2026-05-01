/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18001BDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::AddRef(
        __int64 a1)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::AddRef((Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *)(a1 - 16));
}
