/*
 * XREFs of ?IsBackedByUnifiedTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA_NXZ @ 0x18002B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::IsBackedByUnifiedTile(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 29) )
    return *((_QWORD *)this + 27) != 0LL;
  return result;
}
