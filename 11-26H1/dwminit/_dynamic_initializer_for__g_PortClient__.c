/*
 * XREFs of _dynamic_initializer_for__g_PortClient__ @ 0x180002000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_PortClient__()
{
  InitializeCriticalSection(&stru_18001AD70);
  byte_18001AD98 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_PortClient__);
}
