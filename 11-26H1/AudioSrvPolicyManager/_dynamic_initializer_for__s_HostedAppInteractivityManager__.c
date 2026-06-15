/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800689D8 = 0LL;
  xmmword_1800689E0 = 0LL;
  xmmword_1800689F0 = 0LL;
  dword_180068A00 = 10;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
