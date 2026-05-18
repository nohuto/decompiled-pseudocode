/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18001A148 = 0LL;
  xmmword_18001A128 = 0LL;
  xmmword_18001A138 = 0LL;
  InitializeCriticalSectionEx(&stru_18001A150, 0, 0);
  qword_18001A1B8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18001A178 = 0LL;
  xmmword_18001A188 = 0LL;
  xmmword_18001A198 = 0LL;
  xmmword_18001A1A8 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
