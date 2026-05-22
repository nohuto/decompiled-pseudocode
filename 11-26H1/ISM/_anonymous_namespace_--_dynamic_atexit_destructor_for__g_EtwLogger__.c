/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x18007BAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__()
{
  REGHANDLE v0; // rcx

  v0 = RegHandle;
  RegHandle = 0LL;
  dword_180251328 = 0;
  EventUnregister(v0);
  return McGenEventUnregister_EventUnregister();
}
