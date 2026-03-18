/*
 * XREFs of _dynamic_initializer_for__g_DisplayManager__ @ 0x180007320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_DisplayManager__()
{
  InitializeCriticalSection(&g_DisplayManager);
  qword_1803DE6D8 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  qword_1803DE6E8 = 0LL;
  qword_1803DE6F0 = 0LL;
  qword_1803DE6F8 = 0LL;
  word_1803DE700 = 0;
  byte_1803DE702 = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DisplayManager__);
}
