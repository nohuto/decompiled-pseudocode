/*
 * XREFs of PpmCheckArmPeriod @ 0x1404DF800
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PpmCheckResetProcessors @ 0x1404FB714 (PpmCheckResetProcessors.c)
 */

char PpmCheckArmPeriod()
{
  __int64 v0; // rbx
  char result; // al
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = PpmCheckMinimumPeriod;
  result = PpmCheckArmed;
  if ( 10000
     * (unsigned __int64)*((unsigned int *)PpmCurrentProfile
                         + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next)
                         + 23) > PpmCheckMinimumPeriod )
    v0 = 10000LL
       * *((unsigned int *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 23);
  if ( !PpmCheckArmed )
    goto LABEL_8;
  if ( v0 != PpmCheckPeriod )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
    result = 0;
    PpmCheckArmed = 0;
  }
  if ( !result )
  {
LABEL_8:
    PpmCheckPeriod = v0;
    PpmCheckResetProcessors(0LL);
    result = _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 1LL);
    PpmCheckArmed = 1;
    if ( PpmCheckTimerImplementation )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      return KeSetTimer2((__int64)&PpmCheckTimer, -v0, v0, (__int64)v2);
    }
  }
  return result;
}
