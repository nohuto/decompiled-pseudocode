/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x18000A120
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180075B30 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1802512B8);
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger___0);
}
