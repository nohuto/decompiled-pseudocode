/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x18000F920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18002D1C0 = 0LL;
  xmmword_18002D1A0 = 0LL;
  xmmword_18002D1B0 = 0LL;
  InitializeCriticalSectionEx(&stru_18002D1C8, 0, 0);
  qword_18002D230 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18002D1F0 = 0LL;
  xmmword_18002D200 = 0LL;
  xmmword_18002D210 = 0LL;
  xmmword_18002D220 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
