/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140A3BF2C
 * Callers:
 *     PopSystemIdleWorker @ 0x140A3BBE0 (PopSystemIdleWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140A3C2BC (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0LL;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140E0B754 )
  {
    v2 = dword_140E0B750;
    v3 = &dword_140E0B750;
    v0 = 1LL;
  }
  else
  {
    v2 = dword_140E0B74C;
    v3 = &dword_140E0B74C;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
