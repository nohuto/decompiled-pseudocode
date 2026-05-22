/*
 * XREFs of _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0 @ 0x1801DDA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0()
{
  REGHANDLE v0; // rcx

  v0 = qword_1802512D8;
  qword_1802512D8 = 0LL;
  dword_1802512B8 = 0;
  return EventUnregister(v0);
}
