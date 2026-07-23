/*
 * XREFs of PopUpdateLastUserInputTime @ 0x1409F794C
 * Callers:
 *     PopSystemIdleWorker @ 0x1409F7600 (PopSystemIdleWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x1409F7CDC (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0LL;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140E0B764 )
  {
    v2 = dword_140E0B760;
    v3 = &dword_140E0B760;
    v0 = 1LL;
  }
  else
  {
    v2 = dword_140E0B75C;
    v3 = &dword_140E0B75C;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
