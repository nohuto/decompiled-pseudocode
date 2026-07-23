/*
 * XREFs of KeSetMaxDynamicTickDuration @ 0x1405E7834
 * Callers:
 *     PopEnforceDeepSleep @ 0x140B52B14 (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetMaxDynamicTickDuration(unsigned __int64 a1)
{
  __int64 result; // rax

  result = KeMaximumIncrement;
  if ( KeMaximumIncrement < a1 )
    a1 = KeMaximumIncrement;
  _InterlockedExchange64(&KiMaxDynamicTickDuration, a1);
  return result;
}
