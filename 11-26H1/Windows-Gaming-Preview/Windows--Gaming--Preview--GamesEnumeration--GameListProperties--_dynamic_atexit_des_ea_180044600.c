/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__ @ 0x180044600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F98);
  qword_180059F98 = 0LL;
  return result;
}
