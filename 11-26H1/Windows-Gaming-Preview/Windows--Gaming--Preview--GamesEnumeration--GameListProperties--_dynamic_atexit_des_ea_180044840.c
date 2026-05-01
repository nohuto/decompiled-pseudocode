/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__ @ 0x180044840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F60);
  qword_180059F60 = 0LL;
  return result;
}
