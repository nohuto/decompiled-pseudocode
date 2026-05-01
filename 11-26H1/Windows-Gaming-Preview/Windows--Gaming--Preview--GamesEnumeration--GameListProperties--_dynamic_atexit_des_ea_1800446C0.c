/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__ @ 0x1800446C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059FB8);
  qword_180059FB8 = 0LL;
  return result;
}
