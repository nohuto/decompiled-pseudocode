/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__ @ 0x180044810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059FA8);
  qword_180059FA8 = 0LL;
  return result;
}
