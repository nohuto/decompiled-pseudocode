/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180017110 = 0LL;
  xmmword_1800170F0 = 0LL;
  xmmword_180017100 = 0LL;
  InitializeCriticalSectionEx(&stru_180017118, 0, 0);
  qword_180017180 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180017140 = 0LL;
  xmmword_180017150 = 0LL;
  xmmword_180017160 = 0LL;
  xmmword_180017170 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
