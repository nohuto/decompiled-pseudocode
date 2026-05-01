/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__ @ 0x180044690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F70);
  qword_180059F70 = 0LL;
  return result;
}
