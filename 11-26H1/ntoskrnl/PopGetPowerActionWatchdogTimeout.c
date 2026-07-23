/*
 * XREFs of PopGetPowerActionWatchdogTimeout @ 0x14060A35C
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetPowerActionWatchdogTimeout(int a1)
{
  __int64 result; // rax

  if ( a1 == 1 )
    return (unsigned int)PopPowerActionTransitioningWatchdogTimeout;
  result = 0LL;
  if ( a1 == 2 )
    return (unsigned int)PopPowerActionResumingWatchdogTimeout;
  return result;
}
