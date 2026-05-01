/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180010630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18002F1C0 = 0LL;
  xmmword_18002F1A0 = 0LL;
  xmmword_18002F1B0 = 0LL;
  InitializeCriticalSectionEx(&stru_18002F1C8, 0, 0);
  qword_18002F230 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18002F1F0 = 0LL;
  xmmword_18002F200 = 0LL;
  xmmword_18002F210 = 0LL;
  xmmword_18002F220 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
